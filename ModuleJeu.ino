/*
 Name:		ModuleJeu.ino
 Created:	23/02/2018 00:01:19
 Author:	Pav
*/
#include <Wire.h>
#include "ComClassMDJ.h"
#include "Configuration.h"
// the setup function runs once when you press reset or power the board
void setup() {
	Wire.begin(MY_ADDRESS);
	Wire.onReceive(receptionI2c);
	Serial.begin(9600);
	
}

// the loop function runs over and over again until power down or reset
void loop() {
	delay(100);
}

void receptionI2c(int howMany) {
	while (1 < Wire.available()) { // loop through all but the last
		char c = Wire.read(); // receive byte as a character
		Serial.print(c);         // print the character
	}
	int x = Wire.read();    // receive byte as an integer
	Serial.println(x);         // print the integer
}