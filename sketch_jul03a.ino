int outputPin=2;
int inputPin=3;
float cm;

void setup() {
  Serial.begin(9600);
  pinMode(inputPin,INPUT);
  pinMode(outputPin,OUTPUT);

}

void loop() {
  digitalWrite(outputPin,LOW);
  delayMicroseconds(2);
  digitalWrite(outputPin,HIGH);
  delayMicroseconds(10);
  digitalWrite(outputPin,LOW);
  int distance = pulseIn(inputPin,HIGH);
  distance = distance/58;
  Serial.write(distance);
  delay(50);

}
