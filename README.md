# ISS396-Junior-Project

This project involves the design and development of a **landmine detection robot** that utilizes an **ESP32 microcontroller**, **ultrasonic sensors**, a **GPS module**, **GSM for communication**, and a **metal detection coil**. The robot operates autonomously or can be controlled remotely via an app. It detects landmines, logs their locations using GPS, and sends alerts via SMS to a designated operator.

## Project Overview

The primary objective of this project is to design a robot capable of autonomously detecting landmines in a field, determining their location using GPS, and alerting the operator through **GSM messages**. The system integrates multiple sensors and motor drivers, all controlled by the **ESP32 microcontroller**. 

A unique feature of this project is the inclusion of a mobile app that allows operators to control the robot’s movement. The robot can operate in **two modes**:

1. **Autonomous Mode**: The robot navigates the environment using ultrasonic sensors to avoid obstacles and automatically detect metal objects, potentially landmines.
   
2. **Manual Mode**: The operator can take full control of the robot’s movement via a **mobile app**, which communicates with the robot through the internet. The app uses the **Blynk platform** to manage real-time communication between the robot and the operator, allowing manual control of the robot’s movement.

The system also includes an integrated **GPS module** to pinpoint the exact location of detected mines and send this information via **GSM** to the operator for further action.

### Features:
- **Autonomous Movement**: Uses ultrasonic sensors for obstacle avoidance and autonomous navigation.
- **Metal Detection**: Detects landmines through a metal detection coil.
- **GPS Integration**: Logs the geographic coordinates of detected landmines for future retrieval.
- **GSM Alerts**: Sends location-based SMS alerts to the operator.
- **Mobile App Control**: The robot can be controlled via a mobile app, utilizing the [Blynk platform](https://blynk.io) for real-time communication and control in **manual mode**.
- **Dual-Mode Operation**: Toggle between **Auto Mode** (autonomous movement) and **Manual Mode** (app-based control).

## Folder Structure

The project is organized into several main directories, each serving a specific purpose:

### `Docs/`
Contains documentation, including component lists, proposals, diagrams, and reports.
- **`PCB_Design/`**: Contains Gerber files and other PCB manufacturing files.
- **`Proposal/`**: Contains the project proposal.
- **`Component_List/`**: A list of the components used in the project.
- **`Diagrams/`**: Diagrams of the system architecture, wiring, and block diagrams.

### `Hardware/`
Contains files related to the physical hardware components of the project.
- **`3D_Models/`**: 3D models of the robot and associated parts.
- **`PCB_Design/`**: PCB designs, including versions for different components like Xplora_PCB.

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
- **Blynk App**: Install the Blynk app on your mobile device from the [Google Play Store](https://play.google.com/store/apps/details?id=cc.blynk) or [Apple App Store](https://apps.apple.com/us/app/blynk/id868413436). You will need to set up a Blynk project for controlling the robot in manual mode.

## License

This project is licensed under the MIT License - see the [LICENSE.md](LICENSE.md) file for details.
