import processing.serial.*;

int r;
int g;
int b;
Serial myPort;
int[] serialInArray = new int[3];
int serialCount = 0;
boolean firstContact = false;

void setup() {
  size(256, 256);
  noStroke();

  println(Serial.list());
  String portName = Serial.list()[1];
  myPort = new Serial(this, portName, 9600);
}

void draw() {
  background(#cccccc);
  fill(r, g, b);
  ellipse(width/2, height/2, 100, 100);
}

void serialEvent(Serial myPort) {

  int inByte = myPort.read();
  if (firstContact == false) {
    if (inByte == 'A') { 
      myPort.clear();
      firstContact = true;
      myPort.write('A');
    } 
  } else {
    serialInArray[serialCount] = inByte;
    serialCount++;

    if (serialCount > 2 ) {
      r = serialInArray[0];
      g = serialInArray[1];
      b = serialInArray[2];

      println(r + "\t" + g + "\t" + b);
      serialCount = 0;
    }
  }
}
