#define LATCH 7
#define CLOCK 8
#define DATA 4

const byte ledCharSet[10] = {
  B00000000, B00000001, B00000011, B00000111,
  B00001111, B00011111, B00111111, B01111111,
  B11111111
};

void setup () {
  Serial.begin(9600);
  Serial.write("Program begun\n");

  pinMode(LATCH, OUTPUT);
  pinMode(CLOCK, OUTPUT);
  pinMode(DATA, OUTPUT);
}

void loop () {
  int i = 0;
  while(1)    {
    digitalWrite(LATCH,LOW);
    shiftOut(DATA,CLOCK,MSBFIRST,~(ledCharSet[i]));
    digitalWrite(LATCH,HIGH);
    i++;
    if(i==10){
      i = 0;
    }
    delay(500);
  }
}


