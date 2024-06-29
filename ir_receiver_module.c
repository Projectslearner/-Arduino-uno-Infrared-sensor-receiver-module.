/*
    Project name : Arduino Uno Infrared Sensor Receiver Module
    Modified Date: 29-06-2024
    Code by : Projectslearner
    Website : https://projectslearner.com/learn/arduino-uno-infrared-sensor-receiver
*/

#include <IRremote.h>

// Define the pin connected to the IR receiver module
const int IR_RECEIVER_PIN = 11;  // Change this pin according to your setup

// Initialize an instance of the IRremote library
IRrecv irrecv(IR_RECEIVER_PIN);

// Define a variable to hold the received IR code
decode_results results;

void setup() {
  // Initialize serial communication for debugging
  Serial.begin(9600);

  // Initialize the IR receiver module
  irrecv.enableIRIn();  // Start the receiver
}

void loop() {
  // Check if IR data is available
  if (irrecv.decode(&results)) {
    // Print the received IR code to Serial Monitor
    Serial.print("IR Code received: ");
    Serial.println(results.value, HEX);

    // Resume receiving the next IR code
    irrecv.resume();
  }

  delay(100);  // Small delay before next IR code check
}
