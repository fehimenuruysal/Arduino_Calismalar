#define potPin A0
int pot_deger = 0 ;

int red = 9;
int green = 10 ;
int blue = 11;


int red_value = 0;
int green_value = 0;
int blue_value = 0;

void setup() {
  Serial.begin(9600);
  pinMode(red , OUTPUT);
  pinMode(green , OUTPUT);
  pinMode(blue,OUTPUT);
}

void loop() {
  pot_deger = analogRead(potPin);
  Serial.println(pot_deger);
  if(pot_deger < 341){
    pot_deger = (pot_deger*3)/4;

    red_value = 255 - pot_deger;
    green_value = pot_deger;
    blue_value = 0;
  }else if (pot_deger <682){
    pot_deger = ((pot_deger-341)*3)/4;

    red_value = 0 ;
    green_value = 255-pot_deger;
    blue_value = pot_deger;
  }else{
    pot_deger = ((pot_deger-683)*3)/4;
    
    red_value = pot_deger ;
    green_value= 0 ;
    blue_value = 255 - pot_deger;
  }

  analogWrite(red,255-red_value);
  analogWrite(green,255-green_value);
  analogWrite(blue,255-blue_value);
}
