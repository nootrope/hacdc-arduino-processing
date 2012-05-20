import processing.serial.*;
import cc.arduino.*;

Arduino arduino;
int[] colors = new int[3];

void setup() {
  size(256, 256);
  println(Arduino.list());
  arduino = new Arduino(this, Arduino.list()[1], 57600);

  for (int i = 0; i < 3; i++) {
    arduino.pinMode(i, Arduino.INPUT);
  }
}

void draw() {
  background(#cccccc);

  for (int i = 0; i < 3; i++) {
    colors[i] = arduino.analogRead(i)/4;
    print(colors[i] + "\t");
  }
  println();

  fill(colors[0], colors[1], colors[2]);
  rectMode(CENTER);
  rect(width/2, height/2, 100, 100);
}
