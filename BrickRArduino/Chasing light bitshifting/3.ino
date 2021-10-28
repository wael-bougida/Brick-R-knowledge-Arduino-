#define PORTLED2 2
#define PORTLED3 3
#define PORTLED4 4
#define PORTLED5 5 
#define PORTLED6 6
#define PORTLED7 7 

#define PORTSWTTCH4 4 

void setup() {
  // put your setup code here, to run once:
pinMode(PORTLED2, OUTPUT);
pinMode(PORTLED3, OUTPUT);
pinMode(PORTLED4, OUTPUT);
pinMode(PORTLED5, OUTPUT);
pinMode(PORTLED6, OUTPUT);
pinMode(PORTLED7, OUTPUT);

}

void loop() {
//static int counter = 0; // keep the shiftreg value
 // because we use a static variable
 // withotu static it will be reset to 0
 // each time the loop is entered

 static int shiftreg = 1; 
 if (shiftreg & 1) { // check bit 0
 digitalWrite(PORTLED6,HIGH); // right LED
 } else digitalWrite(PORTLED6,LOW); //

 
 if (shiftreg & 2) { // check bit 1
 digitalWrite(PORTLED7,HIGH); // left LED
 } else digitalWrite(PORTLED7,LOW); // 


 if (shiftreg & 4) { // check bit 2
 digitalWrite(PORTLED4,HIGH); // // set to 1
 } else digitalWrite(PORTLED4,LOW); //

 
 if (shiftreg & 8) { // check bit 3
 digitalWrite(PORTLED5,HIGH); // now last bit 3
 } else digitalWrite(PORTLED5,LOW); //

 
 //delay(1000); // wait fro 1sec = 1000ms

 
  if (shiftreg & 16) { // check bit 4
 digitalWrite(PORTLED3,HIGH); //
 } else digitalWrite(PORTLED3,LOW); //

 
 if (shiftreg & 32) { // check bit 5
 digitalWrite(PORTLED2,HIGH); //
 } else digitalWrite(PORTLED2,LOW); //

 
 //
 delay(300); // 300 ms wait time

 
 //shiftreg = shiftreg << 1; // 1,2,4,8,16,32 shift instruction of C
 shiftreg = (shiftreg +1) % 0x20;
 if (shiftreg > 32) shiftreg = 1; 


 
 // counter = (counter + 1)& 0xf; // this keeps the shiftreg between 0..15
} // end of the loop
