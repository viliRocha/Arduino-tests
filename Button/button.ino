const int button = 2;     // button pin
const int led = 13;      // LED pin

void setup() {
  pinMode(button, INPUT_PULLUP); // button with internal pull-up resistor
  pinMode(led, OUTPUT);
}

void loop() {
  // button pressed = LOW level
  if (digitalRead(button) == LOW) {
    digitalWrite(led, HIGH); // turns on LED
    delay(3000);             // keeps lit for 3 seconds
    digitalWrite(led, LOW);  // turns off LED
  }
}