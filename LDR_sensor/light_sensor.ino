const int sensorLuz = A0;   // Pino analógico do LDR
const int led = 9;          // Pino digital do LED
const int button = 2;     // button pin
int buttonState = 0;
int lightValue = 0;


void setup() {
  pinMode(button, INPUT_PULLUP); // button with internal pull-up resistor
  pinMode(led, OUTPUT);      // Configura LED como saída
  Serial.begin(9600);        // Inicializa comunicação serial
}

void loop() {
  lightValue = analogRead(sensorLuz);

  Serial.print("Luminosidade: ");
  Serial.print(lightValue);

  if (lightValue > 500) {
    Serial.println(" - Água turva!");
  }
  else {
    Serial.println(" - Água clara");
  }

  // turn off the LED by pressing the button
  if (buttonState == LOW) {
    digitalWrite(led, LOW);  // LED aceso
  }
  else {
    digitalWrite(led, HIGH);   // LED apagado
  }

  // Small delay so as not to overload the monitor
  delay(1500);
}