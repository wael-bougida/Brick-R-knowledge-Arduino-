#define PORTLED 13

void setup() {
  // put your setup code here, to run once:
pinMode(PORTLED, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
digitalWrite(PORTLED, HIGH);
delay(1000);
digitalWrite(PORTLED, LOW);
delay(1000);

}
