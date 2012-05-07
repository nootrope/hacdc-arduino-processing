#define TEMP 4

void setup () {
  Serial.begin(9600);
  Serial.println("OK");
  
  pinMode(TEMP, INPUT);
}

void loop () {
  Serial.print("Temp: ");
  Serial.println(analogRead(TEMP)); 
}
