// Analog Input - FLEX METER!!

#include "WProgram.h"
void setup();
void loop();
int ledPin1 = 2;      // LED connected to digital pin 2
int ledPin2 = 3;      // LED connected to digital pin 3
int ledPin3 = 4;      // LED connected to digital pin 4
int ledPin4 = 5;      // LED connected to digital pin 5
int ledPin5 = 6;      // LED connected to digital pin 6

int analogPin = 3;   // potentiometer connected to analog pin 3
int val = 0;         // variable to store the read value

void setup()
{
  pinMode(ledPin1, OUTPUT);   // sets the LEDs as output
  pinMode(ledPin2, OUTPUT);
  pinMode(ledPin3, OUTPUT);
  pinMode(ledPin4, OUTPUT);
  pinMode(ledPin5, OUTPUT);

  Serial.begin(9600);
}

void loop()
{
  val = analogRead(analogPin);   // read the input pin
  //analogWrite(ledPin, val / 4);  // analogRead values go from 0 to 1023
                                   // analogWrite values from 0 to 255

  if(val < 20){
    digitalWrite(ledPin5, HIGH); // full force, all lights
  }
  else if(val < 30){
    digitalWrite(ledPin4, HIGH); // four lights
  }
  else if(val < 40){
    digitalWrite(ledPin3, HIGH); // three lights
  }
  else if(val < 50){
    digitalWrite(ledPin2, HIGH); // two lights
  }
  else if(val < 60){
    digitalWrite(ledPin1, HIGH); // one light
  }
  else{
    digitalWrite(ledPin1, LOW); // no force, no lights
    digitalWrite(ledPin2, LOW);
    digitalWrite(ledPin3, LOW);
    digitalWrite(ledPin4, LOW);
    digitalWrite(ledPin5, LOW);
  }
  
  Serial.println(val, DEC);
}



int main(void)
{
	init();

	setup();
    
	for (;;)
		loop();
        
	return 0;
}

