int distance ;
int triPin = 2;
int echoPin =3;
int redledPin = 4;
int yelledPin = 5;
int greenledPin = 6;

void setup() {
  // put your setup code here, to run once:
pinMode(triPin, OUTPUT);
pinMode(echoPin, INPUT);
pinMode(redledPin, OUTPUT);
pinMode(yelledPin, OUTPUT);
pinMode(greenledPin, OUTPUT);
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(triPin,HIGH);
  delayMicroseconds(10);
  digitalWrite(triPin,LOW);
  delayMicroseconds(5);
  digitalWrite(triPin, HIGH);
  delayMicroseconds(10);
int time = pulseIn(echoPin, HIGH);
  distance = 0.0343 * time / 2;
  Serial.print("Distance from sensor to object: ");
  Serial.println(distance);
  if (distance>15) {
        digitalWrite(redledPin, LOW); // Red LED off
        digitalWrite(yelledPin, LOW); // Yellow LED off
        digitalWrite(greenledPin, LOW); // Green LED off
    } else if (distance > 10 && distance <= 15) {
        digitalWrite(redledPin, LOW); // Red LED off
        digitalWrite(yelledPin, LOW); // Yellow LED off
        digitalWrite(greenledPin, HIGH);  // Green LED on
    } else if (distance > 5 && distance <= 10) {
        digitalWrite(redledPin, LOW); // Red LED off
        digitalWrite(yelledPin, HIGH);  // Yellow LED on
        digitalWrite(greenledPin ,LOW);  // Green LED oFF
    } else if (distance <=5) {
        digitalWrite(redledPin, HIGH);  // Red LED on
        digitalWrite(yelledPin, LOW);  // Yellow LED oFF
        digitalWrite(greenledPin, LOW);  // Green LED oFF
    } else {
        digitalWrite(redledPin, LOW);  // Red LED off
        digitalWrite(yelledPin, LOW);  // Yellow LED off
        digitalWrite(greenledPin, LOW);  // Green LED off
        }
}
