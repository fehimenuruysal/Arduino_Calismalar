#define echoPin 7
#define trigPin 8 
//#define buzzerPin 7

void setup() {
  pinMode(trigPin , OUTPUT);
  pinMode(echoPin , INPUT);
  //pinMode(buzzerPin,OUTPUT);
  Serial.begin(9600);
}

void loop() {
 long mesafe, yanki ;
 digitalWrite(trigPin , LOW);
 delayMicroseconds(2);

 digitalWrite(trigPin,HIGH);
 delayMicroseconds(10);

 digitalWrite(trigPin,LOW);

 yanki = pulseIn(echoPin , HIGH);
 mesafe = yanki/58.2;
 delay(50);
 
 Serial.println(mesafe);

/* if(mesafe < 11 ){
   digitalWrite(buzzerPin,HIGH);
 }else{
    digitalWrite(buzzerPin,LOW);
 }*/
}
