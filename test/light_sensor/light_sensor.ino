#define LIGHT 3

void setup () {
  Serial.begin(9600);
  Serial.println("OK");
  
  pinMode(LIGHT, INPUT);
}

void loop () {
  Serial.print("LIGHT: ");
  Serial.println(analogRead(LIGHT));
}
