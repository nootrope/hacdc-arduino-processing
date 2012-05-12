Particle p1 = new Particle(5000.0, 50.0, .01);
Particle p2 = new Particle(5000.0, 50.0, .01);
Particle p3 = new Particle(5000.0, 50.0, .01);

void setup () {
  size(640, 480);
}

void draw () {
  p1.update();
  p2.update();
  p3.update();
}

