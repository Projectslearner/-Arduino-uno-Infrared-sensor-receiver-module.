# Arduino Uno IR Flame Sensor

#### Project Overview

This project demonstrates how to use an IR flame sensor module with an Arduino Uno to detect the presence of flames. The IR flame sensor detects infrared light emitted by flames and provides an analog voltage output. The Arduino reads this output and determines if a flame is detected based on a threshold value, which is displayed on the serial monitor.

#### Components Needed

- **Arduino Uno**
- **IR Flame Sensor Module**
- **Jumper Wires**
- **Breadboard**

#### Block diagram


#### Circuit Setup

1. **Connect the IR Flame Sensor Module to Arduino Uno:**
   - **Signal pin of the IR Flame Sensor Module:** Connect to analog pin A0 on the Arduino Uno.
   - **Vcc pin of the IR Flame Sensor Module:** Connect to 5V on the Arduino Uno.
   - **GND pin of the IR Flame Sensor Module:** Connect to GND on the Arduino Uno.

#### Instructions

1. **Circuit Setup:**
   - Connect the IR flame sensor module to the Arduino Uno as described in the circuit setup section.

2. **Code Upload:**
   - Open the Arduino IDE and create a new sketch.
   - Copy and paste the provided Arduino code into the sketch.

3. **Testing:**
   - Upload the code to the Arduino Uno.
   - Open the serial monitor with a baud rate of 9600.
   - Ensure the flame sensor is exposed to flames or heat sources. Observe the serial monitor to see the sensor values and flame detection status.

#### Applications

- **Fire Detection Systems:** Implement in fire alarm systems for early detection of flames.
- **Safety Equipment:** Integrate into safety equipment to detect hazardous conditions.
- **Industrial Applications:** Use in industrial settings to monitor for potential fire hazards.

#### Notes

- Ensure the IR flame sensor module is correctly connected to the Arduino Uno and powered.
- Adjust the sensor value threshold (`sensorValue > 100` in the code) based on your specific sensor and environment.
- Regularly test and calibrate the sensor to ensure accurate flame detection.

---

🌐 [ProjectsLearner](https://projectslearner.com/learn/arduino-uno-ir-flame-sensor)  
📧 [projectslearner@gmail.com](mailto:projectslearner@gmail.com)  
📸 [Instagram](https://www.instagram.com/projectslearner/)  
📘 [Facebook](https://www.facebook.com/projectslearner)  
▶️ [YouTube](https://www.youtube.com/@ProjectsLearner)  
📘 [LinkedIn](https://www.linkedin.com/in/projectslearner)

Crafted with ❤️ by ProjectsLearner