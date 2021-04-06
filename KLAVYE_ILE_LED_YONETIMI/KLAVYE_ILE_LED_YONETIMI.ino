#define KIRMIZI_LED 3 
#define SARI_LED 5 
#define YESIL_LED 6

void setup() {
  pinMode(KIRMIZI_LED , OUTPUT);
  pinMode(SARI_LED , OUTPUT);
  pinMode(YESIL_LED , OUTPUT);
  Serial.begin(9600);
}

void loop() {
  digitalWrite(KIRMIZI_LED , LOW);
  digitalWrite(SARI_LED , LOW);
  digitalWrite(YESIL_LED , LOW);
  if(Serial.available()){
    char girdi = Serial.read();
    if(girdi == 'k'){
      digitalWrite(KIRMIZI_LED , HIGH);
      delay(5000);
    }else if (girdi == 's'){
      digitalWrite(SARI_LED,HIGH);
      delay(5000);
    }else if(girdi == 'y'){
      digitalWrite(YESIL_LED,HIGH);
      delay(5000);
    }else{
      digitalWrite(KIRMIZI_LED , HIGH);
      digitalWrite(SARI_LED , HIGH);
      digitalWrite(YESIL_LED , HIGH);
      delay(5000);
    }
  }
}
