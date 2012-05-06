int button = 10;

int led1 = 5;
int led2 = 6;

int slider1 = 2;
int slider2 = 1;

void setup () {
  pinMode(button, INPUT);
  pinMode(slider1, INPUT);
  pinMode(slider2, INPUT);

  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
}

void loop () {
  int value = digitalRead(button);
  if (value == HIGH) {
    int brightness1 = analogRead(slider1) / 4;
    analogWrite(led1, brightness1); 
  } 
  else {
    int brightness2 = analogRead(slider2) / 4;
    analogWrite(led2, brightness2);
  }
}

