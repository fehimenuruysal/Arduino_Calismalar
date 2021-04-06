#define POT_PIN A0

int deger = 0 ;

void setup() {
  Serial.begin(9600);
  Serial.println("Potansiyometri Değerleri Okunuyor !");
}

void loop() {
    deger = analogRead(POT_PIN);
    Serial.println(deger);
    delay(300);
}
