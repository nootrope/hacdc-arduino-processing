#define BUTTON1 10
#define BUTTON2 11
#define BUTTON3 12

long lastDebounceTime = 0;
long debounceDelay = 50;

int lastButtonState = LOW;
int button1;

void setup () {
  Serial.begin(9600);
  Serial.print("OK");

  // Set all the button pins to input
  pinMode(BUTTON1,INPUT);
  pinMode(BUTTON2,INPUT);
  pinMode(BUTTON3,INPUT);

  // Make sure all the button pins have a pull up
  digitalWrite(BUTTON1,HIGH);
  digitalWrite(BUTTON2,HIGH);
  digitalWrite(BUTTON3,HIGH);
}

void loop () {
  int reading = digitalRead(BUTTON3);

  if (reading != lastButtonState) {
    lastDebounceTime = millis();
  }

  if ((millis() - lastDebounceTime) > debounceDelay) {
    button1 = reading;
  }

  lastButtonState = reading;

  if (button1 == LOW) {
    Serial.println("BUTTON1 PRESSED");
  }
}

