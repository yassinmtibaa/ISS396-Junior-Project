import serial
import webbrowser

# Open the serial port (adjust the port and baud rate as needed)
ser = serial.Serial('COM9', 115200, timeout=1)

while True:
    line = ser.readline().decode('utf-8').strip()
    if line.startswith("Google Maps URL:"):
        url = line.split(": ")[1]
        print("Opening:", url)
        webbrowser.open(url)
        break