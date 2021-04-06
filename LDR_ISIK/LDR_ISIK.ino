#define LED 3
int isik;
void setup() {
  pinMode(LED,OUTPUT);
  Serial.begin(9600);

}

void loop() {
  isik = analogRead(A0);
  Serial.println(isik);
  delay(50);
  if(isik<600){
    digitalWrite(LED,HIGH);
  }else{
    digitalWrite(LED,LOW);
  }
}
