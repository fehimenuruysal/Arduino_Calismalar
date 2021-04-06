//in1 sol tekerlekler ileri
const int in1 = 11 ;
//in2 sol tekerlekler geri
const int in2 = 10 ;
//in3 sağ tekerlekler ileri
const int in3 = 9 ;
//in4 sağ tekerlekler geri
const int in4 = 8 ;

const int echo = 5 ;
const int trig = 6 ;

int FLAG = 1;

void setup() {
  pinMode(in1,OUTPUT);
  pinMode(in2,OUTPUT);
  pinMode(in3,OUTPUT);
  pinMode(in4,OUTPUT);
  pinMode(trig,OUTPUT);
  pinMode(echo , INPUT);
  Serial.begin(9600);
  digitalWrite(in1 , LOW); 
  digitalWrite(in2  , LOW); 
  digitalWrite(in3 , LOW);
  digitalWrite(in4 , LOW);
  
}
 
void loop() {
  ileri();
  int uzaklik = mesafeHesapla();
  if(0<uzaklik < 12 ){
    sagaDon();
    return;
  }else{
    FLAG = 1 ;
  }
}

int mesafeHesapla(){
  
 int mesafe, yanki ;
 
 digitalWrite(trig, LOW);
 delayMicroseconds(2);
 
 digitalWrite(trig,HIGH);
 delayMicroseconds(10);
 
 digitalWrite(trig,LOW);

 yanki = pulseIn(echo , HIGH);
 mesafe = yanki/58.2;
 delay(100);
 Serial.println(mesafe);
 return mesafe;
}

void ileri(){
  if(FLAG == 1 ){
    return ;
  }
  digitalWrite(in1 , LOW); 
  digitalWrite(in2  , HIGH); 
  digitalWrite(in3 , HIGH);
  digitalWrite(in4 , LOW); 
  FLAG = 1 ;
}

void geri(){
 
  digitalWrite(in1 , HIGH);
  digitalWrite(in2  , LOW);
  digitalWrite(in3 , LOW);
  digitalWrite(in4 , HIGH); 
  delay(250);
}

void dur(){
  FLAG = 1 ;
  digitalWrite(in1 , LOW);
  digitalWrite(in2 , LOW);
  digitalWrite(in3 , LOW);
  digitalWrite(in4 , LOW);
  delay(2000);
}

void sagaDon(){
  digitalWrite(in1 , HIGH);
  digitalWrite(in2 , LOW);
  digitalWrite(in3 , LOW);
  digitalWrite(in4 , HIGH);
  delay(5000);
}

void solaDon(){
  digitalWrite(in1 , LOW);
  digitalWrite(in2 , HIGH);
  digitalWrite(in3 , HIGH);
  digitalWrite(in4 , LOW);
  delay(1000);
}
