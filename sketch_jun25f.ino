int pin=2;
unsigned long duration;

void setup() {
  Serial.begin(9600);
  pinMode(pin,INPUT);

}

void loop() {
  duration = pulseIn(pin, HIGH,60000000);
  Serial.println(duration);

}
