#define buzzer 8
#define echo 6
#define trig 7


void setup() {
  // put your setup code here, to run once:
  pinMode(echo , INPUT);
  pinMode(trig , OUTPUT);
  pinMode(buzzer , OUTPUT);
  Serial.begin(9600);
}

void loop() {
   int mesafe ,yanki;
   digitalWrite(trig,LOW);
   delay(10);

   digitalWrite(trig,HIGH);
   delay(100);

   digitalWrite(trig,LOW);

   yanki = pulseIn(echo,HIGH);
   mesafe = (yanki/2)/2.91;

   Serial.println(mesafe);
  
   if(mesafe < 150){
     digitalWrite(buzzer,HIGH);
   }else{
      digitalWrite(buzzer ,LOW);
   }
}
