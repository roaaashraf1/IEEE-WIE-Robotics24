int motionPin = 5 ;
int readValue ;
int ledPin = 3;
int buzzerPin = 4;
void setup() {
  // put your setup code here, to run once:
pinMode (motionPin, INPUT );
pinMode(ledPin, OUTPUT );
pinMode(buzzerPin, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
readValue = digitalRead(motionPin);
if(readValue == 1){
  digitalWrite(ledPin, HIGH);
  digitalWrite(buzzerPin, HIGH);

}else{
  digitalWrite(ledPin, LOW);
  digitalWrite(buzzerPin, LOW);
}
}
