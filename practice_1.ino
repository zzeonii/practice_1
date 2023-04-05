const int led = 6;
const int count = 3;

void blink1() 
{
  digitalWrite(led, HIGH);
  delay(500);
  digitalWrite(led, LOW);
  delay(500);
}

void blink2(int count) 
{
  while(count > 0)
  {
    digitalWrite(led, HIGH);
    delay(500);
    digitalWrite(led, LOW);
    delay(500);
    count = count - 1; //count를 줄인다.
    Serial.println(count);
  }    
}

void setup() {
  Serial.begin(9600);
  pinMode(led, OUTPUT);
}

void loop() {
  //blink1();
  blink2(count);
}
