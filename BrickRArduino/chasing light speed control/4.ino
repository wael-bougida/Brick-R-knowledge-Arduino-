#define PORTLED2 2 // now define 4 LEDs
#define PORTLED3 3 // use PD2,PD3,PD4,PD5
#define PORTLED4 4 //
#define PORTLED5 5
#define SWITCH7 7 // the button is wired to PD7
void setup() { // IO definieren
 pinMode(PORTLED2,OUTPUT); // Port 2 as output
 pinMode(PORTLED3,OUTPUT); // Port 3 as output
 pinMode(PORTLED4,OUTPUT); // Port 4 as output
 pinMode(PORTLED5,OUTPUT); // Port 5 as output
 pinMode(SWITCH7,INPUT_PULLUP); // Port 7 as input with pullup.
}
void loop() {
 static int counter = 0; // important the use of static
 if (counter & 1) { // check bits 0..3 one after the other
 digitalWrite(PORTLED4,HIGH); // right LED
 } else digitalWrite(PORTLED4,LOW); //
 if (counter & 2) { // check bit 1
 digitalWrite(PORTLED5,HIGH); // left LED
 } else digitalWrite(PORTLED5,LOW); //
 if (counter & 4) { // check bit 2
 digitalWrite(PORTLED3,HIGH); //
 } else digitalWrite(PORTLED3,LOW); //
 if (counter & 8) { // check bit 3
 digitalWrite(PORTLED2,HIGH); //
 } else digitalWrite(PORTLED2,LOW); //
 //
 if (digitalRead(SWITCH7) == LOW) { // if pressed
 delay(200); // wait only 200ms inbetween
 } else { // else count slow
 delay(1000); //with 1 sec inbetween
 } // then continue
 // always count up
 counter = (counter + 1)& 0xf; // 0..15 counter cyclic
}
