#define KIRMIZI_LED 3
#define SARI_LED 5
#define YESIL_LED 6

void setup() {
  pinMode(KIRMIZI_LED,OUTPUT);
  pinMode(SARI_LED , OUTPUT);
  pinMode(YESIL_LED,OUTPUT);
}

void loop() {
  for(int i = 0 ; i<256 ; i++){
    analogWrite(KIRMIZI_LED,i);
    delay(50);
  }
  for(int j = 0 ; j<256 ; j++){
    analogWrite(SARI_LED,j);
    delay(50);
  }
  for(int k = 0 ; k<256 ; k++){
    analogWrite(YESIL_LED,k);
    delay(50);
  }
}
