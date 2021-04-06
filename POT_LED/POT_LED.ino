#define LED 3
#define POT A0


void setup() {
}

void loop() {
  int deger = analogRead(POT);
  deger = map(deger , 0 , 1023 , 0 , 255);
  analogWrite(LED , deger);
}
