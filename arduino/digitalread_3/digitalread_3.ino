int button = 10;

void setup() {
  Serial.begin(9600);
  Serial.print("OK");
  
  pinMode(button, INPUT);
}

void loop() {
  int value = digitalRead(button);
  Serial.println(value);
}
