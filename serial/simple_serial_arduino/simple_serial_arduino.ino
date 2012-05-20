int switchPin = 10;                       // Switch connected to pin 4

void setup() {
  pinMode(switchPin, INPUT);             // Set pin 0 as an input
  digitalWrite(switchPin, HIGH);
  Serial.begin(9600);                    // Start serial communication at 9600 bps
}

void loop() {
  if (digitalRead(switchPin) == HIGH) {  // If switch is ON,
    Serial.write((byte)1);               // send 1 to Processing
    digitalWrite(6, HIGH);
  } 
  else {                               // If the switch is not ON,
    Serial.write((byte)0);               // send 0 to Processing
    digitalWrite(6, LOW);
  }
  delay(100);                            // Wait 100 milliseconds
}

