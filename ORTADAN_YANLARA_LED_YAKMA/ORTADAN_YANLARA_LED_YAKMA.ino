int ledler[] = {2,3,4,5,6,7,8,9,10};

void setup() {
  for(int i = 0 ; i<9; i++){
    pinMode(ledler[i] , OUTPUT);
  }
}

void loop() {
  int orta =4;
  digitalWrite(6,HIGH);
  delay(500);

  for(int i = 0 ; i<5 ; i++){
    digitalWrite(ledler[orta-i],HIGH);
    digitalWrite(ledler[orta+i],HIGH);
    delay(500);
    digitalWrite(ledler[orta-i],LOW);
    digitalWrite(ledler[orta+i],LOW);
  }

  for(int j =0 ; j<5 ; j++){
    digitalWrite(ledler[j],HIGH);
    digitalWrite(ledler[orta+(orta-j)],HIGH);
    delay(500);
    digitalWrite(ledler[j],LOW);
    digitalWrite(ledler[orta+(orta-j)],LOW);
  }
}
