#define BUZZER 3

void setup () {
  Serial.begin(9600);
  Serial.print("OK");
}

void loop () {
  digitalWrite(BUZZER, HIGH);
  delayMicroseconds(700);
  digitalWrite(BUZZER, LOW);
  delayMicroseconds(700);
}

