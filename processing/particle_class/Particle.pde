class Particle {
  float x;
  float y;
  float r;

  float xdir = 1;
  float ydir = 1;
  float delta;

  boolean alive = true;
  float lifetime;
  float born;

  color c;

  public Particle (float lifetime, float radius, float error) {
    this.x = random(width);
    this.y = random(height);
    this.r = radius + radius * random(error);
    this.lifetime = lifetime * random(error);
    this.born = millis();
    this.c = color(random(255), random(255), random(255));
    this.delta = 10 + 10 * random(error);
  }

  public void update() {
    this.alive = born + lifetime < millis();
    println(this.alive);

    if (this.alive) {
      fill(this.c);
      noStroke();
      ellipse(this.x, this.y, this.r, this.r);
      this.x = this.x + this.delta * this.xdir;
      this.y = this.y + this.delta * this.ydir;

      if (this.x > width || x < 0) {
        this.xdir *= -1;
      }

      if (this.y > height || y < 0) {
        this.ydir *= -1;
      }
    }
  }
}

