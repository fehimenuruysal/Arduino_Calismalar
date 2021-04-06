#define BUTON 8
#define LED 10

int buton_durum = 0 ;
void setup() {
  pinMode(BUTON , INPUT);
  pinMode(LED , OUTPUT);
}

void loop() {
  buton_durum = digitalRead(BUTON);
  if(buton_durum ==1){
    digitalWrite(LED,HIGH);
  }else{
    digitalWrite(LED,LOW);
  }
}
