int LEDLER[] = {2,3,4,5,6};

void setup() {
  for(int i = 0 ; i<5 ; i++){
    pinMode(LEDLER[i] , OUTPUT);
  }
}

void loop() {
  for(int i = 0; i<5 ; i++){
    digitalWrite(LEDLER[i],HIGH);
    delay(100);
    digitalWrite(LEDLER[i],LOW);
  }
  for(int j=4 ; j>-1 ; j--){
    digitalWrite(LEDLER[j],HIGH);
    delay(100);
    digitalWrite(LEDLER[j],LOW);
  }
}
