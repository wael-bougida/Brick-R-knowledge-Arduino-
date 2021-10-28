#define PORTAD0 0 // we use channel 0
// the putput is done at the terminal on the PC
// later on we will connect a display.
void setup() { // start
 Serial.begin(9600); // use this baudrate
 // with this data is transfered to the PC
 // 9600 baud = 9600 bits/second
}
void loop() { // start of the looop
 int value; // temp storage
 value = analogRead(PORTAD0); // read AD converter
 Serial.print((value*10.0)/1023.0); // calc voltage
 Serial.print("V   "); // print Volt symbol
 Serial.println(value); // and then the value
}
