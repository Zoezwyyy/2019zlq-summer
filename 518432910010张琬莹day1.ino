void setup() {
  // put your setup code here, to run once:
  for(int i=2;i<=7;i++)
  {
    pinMode(i,OUTPUT);
  }

}

void loop() {
  for(int x=2;x<=7;x++)
  {
    digitalWrite(x,HIGH);
  }
    delay(1000);

  for(int x=2;x<=7;x++)
  {
    digitalWrite(x,LOW);
    delay(500);
  }

  for(int x=2;x<=7;x++)
  {
    digitalWrite(x,HIGH);
    delay(500);
  }
  delay(1000);

  for(int x=2;x<=7;x++)
  {
    digitalWrite(x,LOW);
  }
  delay(500);
}
