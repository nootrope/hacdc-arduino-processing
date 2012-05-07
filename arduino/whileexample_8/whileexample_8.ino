int sensor = 3;
int led = 6;

void setup () {
  pinMode(sensor, INPUT);
  pinMode(led, OUTPUT);
}

void loop () {
  int value = analogRead(sensor);
  while (value < 128) {
    digitalWrite(led, HIGH);
    value = analogRead(sensor);
  }
  digitalWrite(led, LOW);
}
