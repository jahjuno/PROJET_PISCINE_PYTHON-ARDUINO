const int ledPin = 4; //numéro de la broche uitlisée
void setup () {
  pinMode(ledPin, OUTPUT);
}

void loop() {
  digitalWrite(ledPin, LOW);
  delay(50);
  digitalWrite(ledPin, HIGH);
  delay(50);
}

