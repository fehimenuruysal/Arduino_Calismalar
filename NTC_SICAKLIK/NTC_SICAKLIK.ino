#define sensorPin A0

double sicaklik;

void setup() {
  Serial.begin(9600);
  
  analogReference(INTERNAL);
}

void loop() {
  int sicaklikVolt = analogRead(sensorPin);
  float sicaklikC = sicaklikC = sicaklikVolt / 9.31; 
  Serial.println(sicaklikC);
  delay(1000);
}
