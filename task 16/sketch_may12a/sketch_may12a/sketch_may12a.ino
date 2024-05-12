#include <Servo.h>

Servo myServo;  // Create a servo object
int potPin = A0;  // Connect to the variable resistor

void setup() {
  Serial.begin(9600);  // Initialize serial communication
  myServo.attach(9);  // Attach the servo to pin 9
}

void loop() {
  int POTValue = analogRead(potPin);  // Read analog value
  int angle = map(POTValue, 0, 1023, 0, 180);  
  myServo.write(angle);  // Set servo position
  delay(100);  // Small delay for stability
}

