int x = 0;
int y = 0; 
int r = 50;
int l = 5000;

color c = color(random(255), random(255), random(255));

int delta = 10;
int xdir = 1;
int ydir = 1;

void setup () {
  size(640, 480);
}

void draw() {
  if (millis() >= l) {
    x = (int)random(640);
    y = (int)random(480);
    c = color(random(255), random(255), random(255));
    l = 5000 + millis();
  }
  
  fill(c);
  noStroke();
  ellipse(x, y, r, r);
  if (x > 640 || x < 0) {
    xdir *= -1;
  }

  if (y > 480 || y < 0) {
    ydir *= -1;
  }

  x += (int)random(delta) * xdir;
  y += (int)random(delta) * ydir;
}

