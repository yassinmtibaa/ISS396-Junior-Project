Contains documentation, including component lists, proposals, diagrams, and reports.

- **`Component_List/`**: A detailed list of components used in the project, such as sensors, microcontrollers, and communication modules.
- **`Diagrams/`**: Various diagrams illustrating the system architecture, circuit design, wiring schematics, and block diagrams.
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
