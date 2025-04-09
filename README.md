# ISS396-Junior-Project
This project involves the design and development of a **landmine detection robot** utilizing an ESP32 microcontroller, ultrasonic sensors, a GPS module, GSM for communication, and a metal detection coil. The robot operates autonomously or can be controlled remotely via an app. It identifies landmines, logs their locations, and sends an alert via SMS.

## Project Overview

The primary objective of this project is to create a robot that can autonomously detect landmines in a field, identify their location using GPS, and alert the operator through GSM messages. The system leverages multiple sensors and motor drivers controlled by the ESP32 microcontroller.

### Features:
- **Autonomous movement** with obstacle avoidance using ultrasonic sensors.
- **Metal detection** to locate landmines.
- **GPS module** for geolocation of detected mines.
- **GSM communication** for real-time alerts to the operator.

## Folder Structure

The project is organized into several main directories, each serving a specific purpose.

### `Docs/`
Contains documentation, including component lists, proposals, diagrams, and reports.
- **`PCB_Designe/`**: Contains Gerber files and other PCB manufacturing files.
- **`Proposal/`**: Contains the project proposal.
- **`Component_List/`**: A list of the components used in the project.
- **`Diagrams/`**: Diagrams of the system architecture, wiring, and block diagrams.
  
### `Hardware/`
Contains files related to the physical hardware components of the project.
- **`3D_Models/`**: 3D models of the robot and associated parts.
- **`PCB_Designe/`**: PCB designs, including versions for different components like Xplora_PCB.

### `Research/`
Contains technical references, including datasheets and research papers.
- **`Datasheets/`**: Datasheets for key components like ESP32, ultrasonic sensors, GPS, GSM, etc.

### `Software/`
Contains the source code for the embedded system and mobile app (if applicable).
- **`ESP32_Firmware/`**: The code that runs on the ESP32 microcontroller.
- **`App_Controller/`**: Code for the mobile app (if applicable).
- **`Python_Tools/`**: Additional Python utilities, such as data logging.

### `Tests/`
Contains unit and integration tests.
- **`Unit_Tests/`**: Tests for individual modules and components.
- **`Integration_Tests/`**: Tests for the full system integration.

## Installation

### Prerequisites
- **Arduino IDE** for compiling and uploading ESP32 firmware.
- **Libraries** for ESP32, GSM module, GPS, and ultrasonic sensors. You can install these through the Library Manager in Arduino IDE.
- **3D Modeling Software** (if modifying 3D models).
- **Altium** or similar for working with the PCB files.


