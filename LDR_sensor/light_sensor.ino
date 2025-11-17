/*
// Pino analógico onde o LDR está conectado
int sensorLuz = A0;

void setup() {
  // Inicializa comunicação serial
  Serial.begin(9600);
}

void loop() {
  // Lê o valor do sensor (0 a 1023)
  int valorLuz = analogRead(sensorLuz);

  // Imprime no terminal
  Serial.print("Luminosidade: ");
  Serial.println(valorLuz);

  // Pequeno atraso para não sobrecarregar o monitor
  delay(500);
}
*/

const int sensorLuz = A0;   // Pino analógico do LDR
const int led = 9;          // Pino digital do LED
const int button = 2;     // button pin
int buttonState = 0;


void setup() {
  pinMode(button, INPUT_PULLUP); // button with internal pull-up resistor
  pinMode(led, OUTPUT);      // Configura LED como saída
  Serial.begin(9600);        // Inicializa comunicação serial
}

void loop() {
  Serial.print("Luminosidade: ");
  Serial.println(analogRead(sensorLuz));

  // turn off the LED by pressing the button
  if (buttonState == LOW) {
    digitalWrite(led, LOW);  // LED aceso
  }
  else {
    digitalWrite(led, HIGH);   // LED apagado
  }

  delay(1500);
}