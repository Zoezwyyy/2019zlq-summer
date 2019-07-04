PImage img;
float angle = 0.0;
float offset = 250;
float scalar = 150;
float speed = 0.0056;
int x = 0;
int y = 150;
import processing.serial.*;
Serial myPort;
int distance = 0;

void setup(){
  size(500, 500);
  img=loadImage("111.JPG");
  myPort = new Serial(this, "/dev/cu.usbmodem1411",9600);
}

void draw(){ 
  image(img,0,0);
  smooth();
  ellipseMode(CENTER);
  noStroke();
  fill(255);
  ellipse(width/2, height/2, 300, 300);
  
  if(myPort.available()>0)
  {distance=myPort.read();
  println(distance);
  if(distance>0 && distance<100){
  textSize(25);
  fill(0);
  stroke(255);
  strokeWeight(1);
  text(millis()/60000,220,220);
  text("min",240,220);
  text(millis()/1000,208,250);
  text("sec",252,250);
  
  if(millis()/60000 >= 3){
    textSize(25);
  fill(255,0,0);
  stroke(255,0,0);
  strokeWeight(1);
    text("time up!",200,280);
  }
  noStroke();
  fill(255);
  float x = offset + cos(angle)*scalar;
  float y = offset + sin(angle)*scalar;
  ellipse(x,y,8,8);
  angle += speed;
  }
  else{
    textSize(25);
  fill(0);
  stroke(0);
  strokeWeight(1);
    text("FOCUS",220,250);
  }
  }
}
