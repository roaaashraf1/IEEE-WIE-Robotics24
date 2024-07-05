#include <SoftwareSerial.h>

// Define motor pins
#define ENA 10
#define ENB 11
#define IN1 4
#define IN2 5
#define IN3 6
#define IN4 7

// Define IR sensor pins
#define leftSensor 2
#define rightSensor 3

// Define Bluetooth module pins
#define BT_RX 8
#define BT_TX 9

bool lineFollowing = true;
SoftwareSerial bluetooth(BT_RX, BT_TX); // RX, TX

void setup() {
  pinMode(ENA, OUTPUT);
  pinMode(ENB, OUTPUT);
  pinMode(IN1, OUTPUT);
  pinMode(IN2, OUTPUT);
  pinMode(IN3, OUTPUT);
  pinMode(IN4, OUTPUT);
  pinMode(leftSensor, INPUT);
  pinMode(rightSensor, INPUT);
  
  Serial.begin(9600); // Initialize Serial for debugging
  bluetooth.begin(9600); // Initialize Bluetooth communication
}

void loop() {
  if (bluetooth.available()) {
    char command = bluetooth.read();
    handleBluetoothCommand(command);
  }

  if (lineFollowing) {
    followLine();
  }
}

void followLine() {
  int leftState = digitalRead(leftSensor);
  int rightState = digitalRead(rightSensor);

  if (leftState == LOW && rightState == LOW) {
    // Move forward
    digitalWrite(IN1, HIGH);
    digitalWrite(IN2, LOW);
    digitalWrite(IN3, HIGH);
    digitalWrite(IN4, LOW);
  } else if (leftState == HIGH && rightState == LOW) {
    // Turn right
    digitalWrite(IN1, LOW);
    digitalWrite(IN2, LOW);
    digitalWrite(IN3, HIGH);
    digitalWrite(IN4, LOW);
  } else if (leftState == LOW && rightState == HIGH) {
    // Turn left
    digitalWrite(IN1, HIGH);
    digitalWrite(IN2, LOW);
    digitalWrite(IN3, LOW);
    digitalWrite(IN4, LOW);
  } else {
    // Stop
    digitalWrite(IN1, LOW);
    digitalWrite(IN2, LOW);
    digitalWrite(IN3, LOW);
    digitalWrite(IN4, LOW);
  }
}

void handleBluetoothCommand(char command) {
  switch (command) {
    case 'S':
      // Stop the robot
      digitalWrite(IN1, LOW);
      digitalWrite(IN2, LOW);
      digitalWrite(IN3, LOW);
      digitalWrite(IN4, LOW);
      lineFollowing = false;
      break;
    case 'F':
      // Move forward
      digitalWrite(IN1, HIGH);
      digitalWrite(IN2, LOW);
      digitalWrite(IN3, HIGH);
      digitalWrite(IN4, LOW);
      lineFollowing = false;
      break;
    case 'B':
      // Move backward
      digitalWrite(IN1, LOW);
      digitalWrite(IN2, HIGH);
      digitalWrite(IN3, LOW);
      digitalWrite(IN4, HIGH);
      lineFollowing = false;
      break;
    case 'L':
      // Turn left
      digitalWrite(IN1, HIGH);
      digitalWrite(IN2, LOW);
      digitalWrite(IN3, LOW);
      digitalWrite(IN4, LOW);
      lineFollowing = false;
      break;
    case 'R':
      // Turn right
      digitalWrite(IN1, LOW);
      digitalWrite(IN2, LOW);
      digitalWrite(IN3, HIGH);
      digitalWrite(IN4, LOW);
      lineFollowing = false;
      break;
    case 'C':
      // Continue line following
      lineFollowing = true;
      break;
    default:
      // Invalid command
      break;
  }
}
