const int ledPin = 8;
unsigned long lastTime = 0;
const unsigned long interval = 1000;

void setup() {
  pinMode(ledPin, OUTPUT);
}

void loop() {
  unsigned long now = millis();

  if (now - lastTime >= interval) {
    lastTime = now;
    digitalWrite(ledPin, !digitalRead(ledPin));
  }
}