# High Voltage Buck Converter with WiFi/Bluetooth Monitoring

This repository provides the hardware design and firmware/software for a high-voltage DC-DC buck converter. The converter efficiently steps down a high-voltage input (up to 600V DC) to 50V DC at a maximum power output of 1kW. The system includes WiFi and Bluetooth monitoring capabilities for real-time performance tracking and diagnostics.

---

## Table of Contents
- [Overview](#overview)
- [Features](#features)
- [Specifications](#specifications)
- [Hardware Design](#hardware-design)
- [Software & Firmware](#software--firmware)
- [Setup and Installation](#setup-and-installation)
- [Usage](#usage)
- [Contributing](#contributing)
- [License](#license)

---

## Overview

The high-voltage buck converter in this project is designed to operate in applications where high input voltages (up to 600V DC) must be efficiently converted to a lower, stable output voltage (50V DC) with a power output of up to 1kW. This system is ideal for industrial applications, renewable energy systems, and other high-power applications requiring reliable DC-DC conversion. The addition of WiFi and Bluetooth capabilities allows for remote monitoring, diagnostics, and control.

---

## Features

- **High Input Voltage:** Accepts up to 600V DC.
- **Stable Output Voltage:** Steps down to 50V DC with up to 1kW power output.
- **Efficient Conversion:** Designed for high efficiency across various loads.
- **Remote Monitoring:** WiFi and Bluetooth connectivity for real-time monitoring.
- **Compact Design:** Optimized layout for minimal footprint and high heat dissipation.
- **Safety Protections:** Includes overcurrent, overvoltage, and thermal protections.

---

## Specifications

| Parameter               | Value               |
|-------------------------|---------------------|
| Input Voltage Range     | 0 - 600V DC        |
| Output Voltage          | 50V DC             |
| Maximum Power Output    | 1kW                |
| Conversion Efficiency   | Up to 95%          |
| Communication Protocols | WiFi, Bluetooth    |
| Protections             | Overcurrent, Overvoltage, Over-temperature |

---

## Hardware Design

The hardware design files include the schematics, PCB layouts, and bill of materials (BOM). The design is modular and includes components for power management, filtering, and wireless communication. Files provided:

- **Schematics** (`/hardware/schematics`)
- **PCB Layouts** (`/hardware/pcb`)
- **Bill of Materials (BOM)** (`/hardware/bom`)

### Hardware Requirements

- **High-Voltage MOSFETs/IGBTs**
- **Inductors and Capacitors** for filtering
- **Microcontroller** with WiFi/Bluetooth support (e.g., ESP32)
- **Thermal Management**: Heat sinks and fans
- **Protective Components**: Fuses, TVS diodes

Refer to the hardware directory for more detailed information on components and assembly.

---

## Software & Firmware

This repository provides firmware for the microcontroller and a desktop/mobile application for monitoring.

- **Firmware** (`/software/firmware`): Code for controlling the buck converter, managing conversions, and handling wireless communications.
- **Monitoring App** (`/software/app`): Application for Windows, Linux, and mobile devices (Android/iOS) that connects to the converter via WiFi/Bluetooth.

### Key Software Features

- **Voltage & Current Monitoring**
- **Temperature Monitoring**
- **Fault Detection**
- **Remote On/Off Control**
- **Firmware Updates Over-the-Air (OTA)**

---

## Setup and Installation

### Hardware Setup

1. Assemble the hardware components as per the schematic and PCB layout.
2. Verify connections and ensure all safety precautions are followed, especially for high-voltage testing.
3. Connect the microcontroller to the buck converter control circuitry.

### Firmware Installation

1. Clone this repository:
   ```bash
   git clone https://github.com/vkylamba/big-buck.git
   cd big-buck/software/firmware
2. Compile and upload the firmware to the microcontroller using your preferred IDE (e.g., Arduino IDE, PlatformIO).
3. Set up WiFi and Bluetooth configurations in the firmware for monitoring.

### Monitoring App Installation
Instructions for installing the monitoring application on desktop and mobile devices are in the software/app directory.

### Usage
Power On: Supply high-voltage input to the converter.
Monitor: Connect to the buck converter using the monitoring app via WiFi or Bluetooth.
Diagnostics and Control: View real-time voltage, current, and temperature. Turn the converter on/off and perform diagnostics if needed.

### Contributing
We welcome contributions from the community. Here’s how you can help:

Report Issues: Found a bug or have an enhancement request? Please open an issue in the GitHub repository.
Submit Pull Requests: Fork this repository, make changes, and submit a pull request. Be sure to follow coding standards and include comments where necessary.
Documentation: Help us improve this documentation by suggesting edits or additions.

### License
This project is licensed under the MIT License. See the LICENSE file for more information.
