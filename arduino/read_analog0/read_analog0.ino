// This code os for an Arduino board

int sensorPin = 0;  // select input pin
int val = 0;

void setup() {
  Serial.begin(9600);  // Open serial port
}

void loop() {
  val = analogRead(sensorPin) /4;  // Read value from sensor
  Serial.write((byte)val);         // Print variable to serial port
  delay(100);                      // Wait 100 miliseconds
}


