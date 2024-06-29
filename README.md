# Arduino Uno Infrared Sensor Receiver Module

#### Project Overview

This project demonstrates how to use an infrared (IR) sensor receiver module with an Arduino Uno to receive and decode IR signals. The IR receiver module detects IR signals from a remote control or other IR sources and outputs the corresponding code which is displayed on the serial monitor.

#### Components Needed

- **Arduino Uno**
- **Infrared (IR) Receiver Module**
- **Jumper Wires**
- **Breadboard**

#### Block diagram


#### Circuit Setup

1. **Connect the IR Receiver Module to Arduino Uno:**
   - **Signal pin of the IR Receiver Module:** Connect to digital pin 11 on the Arduino Uno.
   - **Vcc pin of the IR Receiver Module:** Connect to 5V on the Arduino Uno.
   - **GND pin of the IR Receiver Module:** Connect to GND on the Arduino Uno.

#### Instructions

1. **Circuit Setup:**
   - Connect the IR receiver module to the Arduino Uno as described in the circuit setup section.

2. **Library Installation:**
   - If not already installed, download and install the IRremote library in the Arduino IDE. This library provides functions to receive and decode IR signals.

3. **Code Upload:**
   - Open the Arduino IDE and create a new sketch.
   - Copy and paste the provided Arduino code into the sketch.

4. **Testing:**
   - Upload the code to the Arduino Uno.
   - Open the serial monitor with a baud rate of 9600.
   - Point an IR remote control towards the IR receiver module and press buttons on the remote. Observe the serial monitor to see the received IR codes displayed.

#### Applications

- **Remote Control Systems:** Implement in projects that require remote control functionality.
- **Automation:** Integrate with automation systems to trigger actions based on IR signals.
- **Consumer Electronics:** Use in projects involving consumer electronics that use IR remotes.

#### Notes

- Ensure the IR receiver module is correctly connected to the Arduino Uno and powered.
- The IRremote library simplifies the decoding of IR signals and provides reliable output of IR codes.
- Adjust the code as necessary to interpret specific IR signals based on your application requirements.

---

🌐 [ProjectsLearner](https://projectslearner.com/learn/arduino-uno-infrared-sensor-receiver)  
📧 [projectslearner@gmail.com](mailto:projectslearner@gmail.com)  
📸 [Instagram](https://www.instagram.com/projectslearner/)  
📘 [Facebook](https://www.facebook.com/projectslearner)  
▶️ [YouTube](https://www.youtube.com/@ProjectsLearner)  
📘 [LinkedIn](https://www.linkedin.com/in/projectslearner)

Crafted with ❤️ by ProjectsLearner