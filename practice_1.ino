const int led = 6;

void blink1() 
{
  digitalWrite(led, HIGH);
  delay(500);
  digitalWrite(led, LOW);
  delay(500);
}

void setup() {
  pinMode(led, OUTPUT);
}

void loop() {
  blink1();
}
