#define redPin 3
#define yellowPin 5 
#define greenPin 6

void setup() {
  pinMode(redPin,OUTPUT);
  pinMode(yellowPin,OUTPUT);
  pinMode(greenPin,OUTPUT);
}

void loop() {
  digitalWrite(redPin,HIGH);
  digitalWrite(yellowPin,LOW);
  digitalWrite(greenPin,LOW);
  delay(10000);

  digitalWrite(redPin,LOW);
  digitalWrite(yellowPin,HIGH);
  delay(2000);

  digitalWrite(yellowPin,LOW);
  digitalWrite(greenPin,HIGH);
  delay(20000);
}
