#include <Servo.h>

Servo motor;
int okuma;
int derece ;

void setup() {
  // put your setup code here, to run once:
  motor.attach(3);
}

void loop() {
  // put your main code here, to run repeatedly:
  okuma = analogRead(A0);
  derece = map(okuma , 0 , 1023 , 0 , 180);
  motor.write(derece);
}
