#define SLIDER1 0
#define SLIDER2 1
#define SLIDER3 2

void setup () {
  Serial.begin(9600);
  Serial.print("Program begun\n");
}

void loop () {
  int val = 0;
  
  Serial.print("Sliders: ");
  val = analogRead(SLIDER1);
  Serial.print(" ");
  Serial.print(val);
  val = analogRead(SLIDER2);
  Serial.print(" ");
  Serial.print(val);
  val = analogRead(SLIDER3);
  Serial.print(" ");
  Serial.print(val);
  Serial.println("\n");
}
