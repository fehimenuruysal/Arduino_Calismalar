#define redPin 11
#define yellowPin 10
#define greenPin 9
#define potPin A0

int value = 0 ;

void setup() {
  pinMode(redPin , OUTPUT);
  pinMode(yellowPin , OUTPUT);
  pinMode(greenPin , OUTPUT);

  Serial.begin(9600);
  Serial.println("System is working...");
}

void loop() {
  value = analogRead(potPin);

  if(value>=0 && value < 325){
    digitalWrite(redPin , HIGH);
    digitalWrite(greenPin , LOW);
    digitalWrite(yellowPin , LOW);
    
    Serial.println(" Red LED is working...");
  }else if ( value >= 325 && value < 650){  
    digitalWrite(redPin , LOW);
    digitalWrite(greenPin , LOW);
    digitalWrite(yellowPin , HIGH);
    
    Serial.println(" Yellow LED is working...");
  }else{
    digitalWrite(redPin , LOW);
    digitalWrite(greenPin , HIGH);
    digitalWrite(yellowPin , LOW);

    
    Serial.println(" Green LED is working...");
  }
}
