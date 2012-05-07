int led = 6;

void setup () {
  pinMode(led, OUTPUT);
}

void loop() {
  for (int i = 0; i < 10; i++) {
    digitalWrite(led, HIGH);
    delay(1000);
    digitalWrite(led, LOW);
    delay(1000);
  }
  delay(10000);
}
