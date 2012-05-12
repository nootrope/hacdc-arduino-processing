/**
 * Simple Particle System
 * by Daniel Shiffman.  
 * 
 * Particles are generated each cycle through draw(),
 * fall with gravity and fade out over time
 * A ParticleSystem object manages a variable size (ArrayList) 
 * list of particles. 
 */

ParticleSystem ps;

int num = 16;
int lifetime = 128;
int blueness = 255;

void setup() {
  size(640, 360);
  colorMode(RGB, 255, 255, 255, 100);
  ps = new ParticleSystem(256, new PVector(width/2, height/2, 0));
  smooth();
}

void draw() {
  background(0);
  ps.run();

  if (ps.numParticles() < num) {
    while (ps.numParticles () < num) {
      ps.addParticle(mouseX, mouseY, lifetime, blueness);
    }
  }
}


