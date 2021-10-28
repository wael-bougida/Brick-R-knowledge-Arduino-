#define PORTAD0 0


void setup() { // start
 Serial.begin(9600); // the speed; the BAUDRate
 // for the communication with the PC
 // 9600 Baud = 9600 Bits/Second
}

void loop() { // loop start
 int value; // value from AD converter
 double Vdivider,Rldr; // voltage at the divider of resistance + LDR
 value = analogRead(PORTAD0); // read A0
 // convert in steps from 0..1023 to 5 V max
 Vdivider = value * 5.0 / 1023.0;
 // convert voltage at divider to resistance value R of LDR
 // measure battery before (!) Here we asume 9V;
 // if not 9V the value has to be adapted
 Rldr = (Vdivider*10000.0)/(9.0-Vdivider);
 Serial.print(Rldr); // show resistance at terminal
 Serial.println("   Ohm  "); // denomination Ohm in double quotes
}
