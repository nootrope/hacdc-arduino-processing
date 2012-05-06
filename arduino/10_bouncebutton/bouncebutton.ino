#include <Bounce.h>

int button = 10;
int led = 6;

Bounce bouncer = Bounce(button,5 ); 

void setup() {
  pinMode(button,INPUT);
  pinMode(led,OUTPUT);
}

void loop() {
  bouncer.update ( );
 
 int value = bouncer.read();
 
 if ( value == HIGH) {
   digitalWrite(led, HIGH );
 } else {
    digitalWrite(led, LOW );
 }
 
}

