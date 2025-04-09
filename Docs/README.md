# Documentation Folder Overview

The **Documentation** folder contains all the essential documents related to the project's development, including component lists, proposals, diagrams, and reports. Below is a breakdown of the folder structure and the files it contains:

---

### 1. **Component_List/**
A detailed list of components used in the project, such as sensors, microcontrollers, and communication modules.

---

### 2. **Diagrams**
This section includes all the visual diagrams that describe the system's architecture, design, and interactions:

#### 2.1 **Block Diagram (Block Diagrams.png)**
The Block Diagram provides a high-level overview of the system's architecture. It shows the major components of the robot, including the ESP32 microcontroller, sensors, actuators, GPS, GSM, and the mobile app control. This diagram helps visualize how data flows through the system and the interconnections between components.  
*Created using [iodraw](https://app.diagrams.net/).*

#### 2.2 **Circuit Design (circuit design.png)**
The Circuit Design diagram offers a detailed layout of the electrical connections between the various components, such as the ESP32, ultrasonic sensors, motor drivers, GPS module, and GSM module. It is essential for understanding the wiring and ensuring proper hardware setup.  
*Created using [CircuitDesigner](https://app.cirkitdesigner.com/).*

#### 2.3 **Component Placement (cmp.PNG)**
The Component Placement diagram shows how the components are arranged on the robot chassis. It includes the positioning of key components such as the ESP32 microcontroller, sensors, motors, and GPS module. This helps in visualizing the physical setup and optimizing component placement.  
*Created using [Visual Paradigm](https://online.visual-paradigm.com/).*

#### 2.4 **Sequence Diagram (sequenceDiagram.png)**
The Sequence Diagram illustrates the sequence of interactions between system components over time. It helps to understand how the robot operates step by step, such as detecting obstacles, moving forward, and sending alerts when a landmine is detected.  
*Created using [Visual Paradigm](https://online.visual-paradigm.com/).*

#### 2.5 **Use Case Diagram (usecase.PNG)**
The Use Case Diagram outlines the interactions between users (operator/admin) and the system. It includes functionalities such as manual control of the robot via the mobile app, receiving SMS alerts for landmines, and system configuration.  
*Created using [Visual Paradigm](https://online.visual-paradigm.com/).*

---

### 3. **PCB_Designe/**
This folder contains all the design files related to the PCB (Printed Circuit Board) used in the project.

#### 3.1 **Manufacturing files/**
Contains files necessary for PCB manufacturing:
- **`BOM/`**: Bill of Materials listing all the components used.
- **`ExportSTEP/`**: STEP files for the 3D models of the PCB.
- **`Gerber/`**: Gerber files for PCB fabrication.
- **`NC Drill/`**: NC Drill files for PCB hole drilling.
- **`ODB/`**: ODB++ files for PCB data exchange, with the following subfolders:
  - **`odb/`**: Main ODB++ data.
  - **`fonts/`**, **`input/`**, **`matrix/`**, **`misc/`**, **`steps/`**: Various subdirectories with detailed PCB data, including layers, nets, and processes.
  - **`steps/pcb/`**: Contains design layers (top, bottom) and drill information.
- **`symbols/`**: Component symbol library used in the PCB design.
- **`Pick Place/`**: Automated PCB assembly placement files.
- **`Report Board Stack/`**: Stack-up information of the PCB.
- **`Test Points/`**: Test points used to verify the PCB's functionality.

---

### 4. **Proposal/**
Contains the initial project proposal that outlines the project goals, objectives, and the design specifications for the landmine detection robot.

---

This folder structure ensures that all relevant documentation is organized and easily accessible. Let me know if you need any adjustments or further details!
