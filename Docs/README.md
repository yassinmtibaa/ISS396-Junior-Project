# Documentation Folder Overview
Contains documentation, including component lists, proposals, diagrams, and reports.

- **`Component_List/`**: A detailed list of components used in the project, such as sensors, microcontrollers, and communication modules.
- # Diagrams

### 1. **Block Diagram (Block Diagrams.png)**
This diagram represents the major functional components of the robot and how they are interconnected. It illustrates the relationships between the microcontroller (ESP32), sensors, actuators, GPS, GSM, and mobile app control. The diagram provides a high-level overview of how data flows through the system and how different parts interact.  
*Created using [iodraw](https://iodraw.io/).*

### 2. **Circuit Design (circuit design.png)**
The circuit design diagram provides a detailed layout of the electrical connections between the various components, such as the ESP32, ultrasonic sensors, motor drivers, GPS module, and GSM module. This diagram is crucial for understanding the wiring and ensuring that each component is correctly connected to avoid any hardware issues during assembly.  
*Created using [CircuitDesigner](https://www.circuitdesigners.com/).*

### 3. **Component Placement (cmp.PNG)**
This diagram shows the physical placement and arrangement of the components on the robot chassis. It includes the positions of key components like the ESP32 microcontroller, sensors, motors, and GPS module. The diagram helps visualize how the components are mounted and ensures proper placement for optimal performance.  
*Created using [Visual Paradigm](https://www.visual-paradigm.com/).*

### 4. **Sequence Diagram (sequenceDiagram.png)**
The sequence diagram illustrates the step-by-step process of the robot's operation, showing how different components interact with each other over time. For example, it may depict the sequence of events when the robot detects an obstacle, moves forward, and sends an alert if a landmine is detected. This diagram highlights the timing and order of interactions between system components.  
*Created using [Visual Paradigm](https://www.visual-paradigm.com/).*

### 5. **Use Case Diagram (usecase.PNG)**
The use case diagram shows the different interactions between the system and its users (e.g., the operator or admin). It outlines the key functionalities, such as manually controlling the robot via the mobile app, receiving SMS alerts for detected landmines, and configuring the system. This diagram helps define the user requirements and system behavior.  
*Created using [Visual Paradigm](https://www.visual-paradigm.com/).*

- **`PCB_Designe/`**: PCB design files, including:
  - **`Manufacturing files/`**: Contains all files necessary for PCB manufacturing:
    - **`BOM/`**: Bill of Materials listing all components used.
    - **`ExportSTEP/`**: STEP files for 3D models of the PCB.
    - **`Gerber/`**: Gerber files for PCB fabrication.
    - **`NC Drill/`**: NC Drill files for PCB hole drilling.
    - **`ODB/`**: ODB++ files for PCB data exchange, including subfolders:
      - **`odb/`**: Main ODB++ data.
        - **`fonts/`**, **`input/`**, **`matrix/`**, **`misc/`**, **`steps/`**: Various subdirectories storing detailed PCB data for layers, nets, and other processes.
        - **`steps/pcb/`**: Contains individual steps like design layers (top, bottom) and drill information.
      - **`symbols/`**: Symbol library for components in the PCB design.
    - **`Pick Place/`**: Placement files for automated PCB assembly.
    - **`Report Board Stack/`**: Stack-up information of the PCB.
    - **`Test Points/`**: Test points for verifying the PCB’s functionality.
- **`Proposal/`**: Contains the initial project proposal outlining the goals, objectives, and design specifications of the landmine detection robot.
