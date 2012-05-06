int led1 = 5;
int led2 = 6;

int button1 = 10;
int button2 = 11; 
int button3 = 12;

void setup () {
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);

  pinMode(button1, INPUT);
  pinMode(button2, INPUT);
  pinMode(button3, INPUT);
}

void loop() {
  int value = 0;
  if (digitalRead(button1)) {
    value = value + 1;
  }

  if (digitalRead(button2)) {
    value = value + 1;
  }

  if(digitalRead(button3)) {
    value = value + 1;
  }

  switch (value) {
  case 1:
    digitalWrite(led1, HIGH);
    break;
  case 2:
    digitalWrite(led2, HIGH);
    break;
  case 3:
    digitalWrite(led1, HIGH);
    digitalWrite(led2, HIGH);
    break;
  default:
    digitalWrite(led1, LOW);
    digitalWrite(led2, LOW);
  }
}

