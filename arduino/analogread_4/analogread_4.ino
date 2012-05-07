int slider = 0;

void setup () {
  Serial.begin(9600);
  Serial.println("OK"); 

  pinMode(slider, INPUT);
}

void loop () {
  int value = analogRead(slider);

  Serial.println(value);
}

