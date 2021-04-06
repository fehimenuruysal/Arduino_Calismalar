#define sensorPin A0

void setup() {
  Serial.begin(9600);
}

void loop() {
  int isi = analogRead(sensorPin);
  isi = isi /2;
  Serial.println(isi);
  delay(4000);
}
