#include <TinyGPS++.h>
#include <SoftwareSerial.h>
#include <WiFi.h>

// WiFi credentials
const char* ssid = "S23 ultra";       // Replace with your WiFi SSID
const char* password = "987654321"; // Replace with your WiFi password

// GPS module pins
const int RX_PIN = 23, TX_PIN = 4;
const uint32_t GPS_BAUD = 9600; // Default baud rate of NEO-6M is 9600

TinyGPSPlus gps; // The TinyGPS++ object
SoftwareSerial gpsSerial(RX_PIN, TX_PIN); // The serial interface to the GPS device

bool firstLocationDetected = false; // Flag to track the first location

void setup() {
  Serial.begin(9600); // Use a higher baud rate for faster communication
  gpsSerial.begin(GPS_BAUD);

  // Connect to WiFi
  WiFi.begin(ssid, password);
  Serial.print("Connecting to WiFi");
  while (WiFi.status() != WL_CONNECTED) {
    delay(500);
    Serial.print(".");
  }
  Serial.println();
  Serial.println("Connected to WiFi");

  Serial.println(F("Arduino - GPS module"));
}

void loop() {
  if (gpsSerial.available() > 0) {
    if (gps.encode(gpsSerial.read())) {
      if (gps.location.isValid() && !firstLocationDetected) {
        // Get latitude and longitude
        double latitude = gps.location.lat();
        double longitude = gps.location.lng();

        // Print the Google Maps URL to the Serial Monitor
        Serial.print("Google Maps URL: https://www.google.com/maps?q=");
        Serial.print(latitude, 6);
        Serial.print(",");
        Serial.println(longitude, 6);

        firstLocationDetected = true; // Set the flag to true
      }
    }
  }

  if (millis() > 10000 && gps.charsProcessed() < 10) {
    Serial.println(F("No GPS data received: check wiring"));
  }
}