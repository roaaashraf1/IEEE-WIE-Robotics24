// Motor control pins
const int motorPin1 = 7; // Example pin for motor control
const int motorPin2 = 6; // Example pin for motor control

// External signal pin
const int externalSignalPin = 9; // Example pin for external signal

void setup() {
    
    pinMode(motorPin1, OUTPUT);
    pinMode(motorPin2, OUTPUT);
    pinMode(externalSignalPin, INPUT);
}

void loop() {
    // Read the state of the external signal
    int externalSignal = digitalRead(externalSignalPin);

    // If signal is HIGH, turn the motor ON; if LOW, turn it OFF
    if (externalSignal == HIGH) {
        // Turn ON motor
        digitalWrite(motorPin1, HIGH);
        digitalWrite(motorPin2, LOW);
    } else {
        // Turn OFF motor
        digitalWrite(motorPin1, LOW);
        digitalWrite(motorPin2, LOW);
    }
}

