#include <IRremote.h>

int RECV_PIN = 2;
int kirmiziLed = 9 ;
int yesilLed = 10 ;
int maviLed = 11 ;

decode_results results ;
IRrecv irrecv(RECV_PIN);

#define CH1 0xFFA25D
#define CH  0xFF629D
#define CH2 0xFFE21D
#define PREV 0xFF22DD
#define NEXT 0xFF02FD
#define PLAYPAUSE 0xFFC23D
#define VOL1 0xFFE01F
#define VOL2 0xFFA857
#define EQ 0xFF906F
#define BUTON0 0xFF6897
#define BUTON100 0xFFB04F
#define BUTON1 0xFF30CF
#define BUTON2 0xFF18E7
#define BUTON3 0xFF7A85
#define BUTON4 0xFF10EF
#define BUTON5 0xFF38C7
#define BUTON6 0xFF5AA5
#define BUTON7 0xFF42BD
#define BUTON8 0xFF4AB5
#define BUTON9 0xFF52AD

void setup() {
  // put your setup code here, to run once:
  pinMode(kirmiziLed,OUTPUT);
  pinMode(yesilLed,OUTPUT);
  pinMode(maviLed,OUTPUT);
  Serial.begin(9600);
  irrecv.enableIRIn();
}

void loop() {
  // put your main code here, to run repeatedly:
  if (irrecv.decode(&results))
  {
    if (results.value == BUTON1)
    {
      digitalWrite(kirmiziLed, !digitalRead(kirmiziLed));
      if (digitalRead(kirmiziLed) == HIGH)
      {
        Serial.println("LED 1 yandi");
      }
      else
      {
        Serial.println("LED 1 sondu");
      }
    }
    if (results.value == BUTON2)
    {
      digitalWrite(yesilLed, !digitalRead(yesilLed));
      if (digitalRead(yesilLed) == HIGH)
      {
        Serial.println("LED 2 yandi");
      }
      else
      {
        Serial.println("LED 2 sondu");
      }
    }
    if (results.value == BUTON3)
    {
      digitalWrite(maviLed, !digitalRead(maviLed));
      if (digitalRead(maviLed) == HIGH)
      {
        Serial.println("LED 3 yandi");
      }
      else
      {
        Serial.println("LED 3 sondu");
      }
    }
    if (results.value == BUTON0)
    {
      digitalWrite(maviLed, LOW);
      digitalWrite(kirmiziLed, LOW);
      digitalWrite(yesilLed, LOW);
      Serial.println("Tum LED'ler sondu");
    }
    if (results.value == BUTON5)
    {
      digitalWrite(maviLed, HIGH);
      digitalWrite(kirmiziLed, HIGH);
      digitalWrite(yesilLed, HIGH);
      Serial.println("Tum LED'ler yandi");
    }
    irrecv.resume();
  }
}
