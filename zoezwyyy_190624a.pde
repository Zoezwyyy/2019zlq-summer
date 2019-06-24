int index=0;

void setup(){
  size(500,500);
  background(0);
}

void draw(){
  float d=random(20,60);
  float r=random(10,80);
  noStroke();
  fill(random(200),random(100),random(255),random(100));
  ellipse(random(width),random(height),d,d);
  rect(random(width),random(height),r,r);
  index++;
}

void keyPressed(){
  if(key == 's'){
    saveFrame("./abc/page"+index+".png");
    //index +=1; //++; //= index + 1;
  }
}
