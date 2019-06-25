void setup() {
  pinMode(4,INPUT);
  pinMode(13, OUTPUT);
  pinMode(8,OUTPUT);

}

void loop() {
  int n=digitalRead(4);

  if(n==HIGH)
  {
    digitalWrite(13,HIGH);
    digitalWrite(8,LOW);
  }
  
  else
  {
    digitalWrite(8,HIGH);
    digitalWrite(13,LOW);
  }

}
