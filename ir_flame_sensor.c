/*
    Project name : Arduino Uno IR Flame Sensor
    Modified Date: 29-06-2024
    Code by : Projectslearner
    Website : https://projectslearner.com/learn/arduino-uno-ir-flame-sensor
*/

// Define the pin connected to the IR flame sensor module
const int IR_FLAME_SENSOR_PIN = A0; // Analog pin connected to the sensor

void setup() {
  // Initialize serial communication for debugging
  Serial.begin(9600);

  // Initialize the flame sensor pin as input
  pinMode(IR_FLAME_SENSOR_PIN, INPUT);
}

void loop() {
  // Read the analog value from the IR flame sensor
  int sensorValue = analogRead(IR_FLAME_SENSOR_PIN);

  // Print the sensor value to Serial Monitor
  Serial.print("Sensor Value: ");
  Serial.println(sensorValue);

  // Determine flame presence based on sensor value threshold
  if (sensorValue > 100) {
    Serial.println("Flame detected!");
  } else {
    Serial.println("No flame detected.");
  }

  delay(1000); // Delay for 1 second before next reading
}
