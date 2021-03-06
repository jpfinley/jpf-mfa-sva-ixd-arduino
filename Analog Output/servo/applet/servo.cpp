// Controlling a servo position using a potentiometer (variable resistor)
// by Michal Rinott

#include <Servo.h>

#include "WProgram.h"
void setup();
void loop();
Servo myservo; // create servo object to control a servo


int potpin = 3; // analog pin used to connect the potentiometer
int val; // variable to read the value from the analog pin

void setup(){
  myservo.attach(9); // attaches the servo on pin 9 to the servo object
 Serial.begin(9600);
}


void loop(){
  Serial.println(val, DEC);
  val = analogRead(potpin); // reads the value of the potentiometer (value between 0 and 1023)
  val = map(val, 0, 1028, 0, 100); // scale it to use it with the servo (value between 0 and 180)
  myservo.write(val); // sets the servo position according to the scaled value
  delay(15); // waits for the servo to get there
}

int main(void)
{
	init();

	setup();
    
	for (;;)
		loop();
        
	return 0;
}

