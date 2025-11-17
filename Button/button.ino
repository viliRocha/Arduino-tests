const int button = 2;     // button pin
const int led = 13;      // LED pin
int buttonState = 0;

void setup() {
  pinMode(button, INPUT_PULLUP); // button with internal pull-up resistor
  pinMode(led, OUTPUT);
}

void loop() {
  // turn off the LED by pressing the button
  if (buttonState == LOW) {
    digitalWrite(led, LOW);  // LED aceso
  }
  else {
    digitalWrite(led, HIGH);   // LED apagado
  }
}