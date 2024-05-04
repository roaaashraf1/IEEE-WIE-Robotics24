#define PIN_RED 2      // The Arduino pin connected to the red light
#define PIN_YELLOW 3   // The Arduino pin connected to the yellow light
#define PIN_GREEN 4    // The Arduino pin connected to the green light
#define RED_TIME 4000  // Red light duration in milliseconds
#define YELLOW_TIME 4000  // Yellow light duration in milliseconds
#define GREEN_TIME 4000   // Green light duration in milliseconds

void setup() {
  pinMode(PIN_RED, OUTPUT);
  pinMode(PIN_YELLOW, OUTPUT);
  pinMode(PIN_GREEN, OUTPUT);
}

void loop() {
  // Red light on
  digitalWrite(PIN_RED, HIGH);
  digitalWrite(PIN_YELLOW, LOW);
  digitalWrite(PIN_GREEN, LOW);
  delay(RED_TIME);

  // Yellow light on
  digitalWrite(PIN_RED, LOW);
  digitalWrite(PIN_YELLOW, HIGH);
  digitalWrite(PIN_GREEN, LOW);
  delay(YELLOW_TIME);

  // Green light on
  digitalWrite(PIN_RED, LOW);
  digitalWrite(PIN_YELLOW, LOW);
  digitalWrite(PIN_GREEN, HIGH);
  delay(GREEN_TIME);
}