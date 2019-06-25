void setup() {
  pinMode(4,INPUT);
  pinMode(13, OUTPUT);

}

void loop() {
  int n=digitalRead(4);

  if(n=HIGH)
  {
    delay(1000);
    digitalWrite(13,HIGH);
    delay(500);
    digitalWrite(13,LOW);
  }

}
