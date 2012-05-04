#define LED1 5
#define LED2 6

void setup () {
  Serial.begin(9600);
  Serial.println("OK"); 
  
  pinMode(LED1, OUTPUT);
  pinMode(LED2, OUTPUT);
}

void loop () {
  digitalWrite(LED1, HIGH);
  digitalWrite(LED2, LOW);
  
  delay(100);
  
  digitalWrite(LED1, LOW);
  digitalWrite(LED2, HIGH);
  
  delay(100);
}

