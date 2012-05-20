int slider1 = 2;
int slider2 = 1;
int slider3 = 0;
int inByte = 0;

void setup() {
  Serial.begin(9600);
  pinMode(slider1, INPUT);
  pinMode(slider2, INPUT);
  pinMode(slider3, INPUT);
  establishContact();
}

void loop() {
  byte value1 = analogRead(slider1)/4;
  delay(10);
  byte value2 = analogRead(slider2)/4;
  delay(10);
  byte value3 = analogRead(slider3)/4;

  if (Serial.available() > 0) {
    Serial.write(value1);
    Serial.write(value2);
    Serial.write(value3);               
  }
}

void establishContact() {
  while (Serial.available() <= 0) {
    Serial.write('A');   // send a capital A
    delay(300);
  }
}

