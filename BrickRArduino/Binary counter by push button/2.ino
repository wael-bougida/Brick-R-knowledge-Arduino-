#define PORTLED2 2
#define PORTLED3 3


#define PORTSWTTCH4 4 

void setup() {
  // put your setup code here, to run once:
pinMode(PORTLED2, OUTPUT);
pinMode(PORTLED3, OUTPUT);
pinMode(PORTSWTTCH4, INPUT_PULLUP);

}

void loop() {
  // put your main code here, to run repeatedly:
//digitalWrite(PORTLED2, HIGH);
//digitalWrite(PORTLED3, LOW);
//delay(1000);
//digitalWrite(PORTLED2, LOW);
//digitalWrite(PORTLED3, HIGH);
//delay(1000);

if (digitalRead(PORTSWTTCH4)== LOW){
  digitalWrite(PORTLED2, HIGH);
  digitalWrite(PORTLED3, LOW);
  delay(1000);
  digitalWrite(PORTLED2, LOW);
  digitalWrite(PORTLED3, HIGH);
  delay(1000);
}

}
