#define LED 9

#include "WProgram.h"
void setup();
void loop();
int i = 0;

void setup(){
  pinMode(LED, OUTPUT);
}

void loop(){
  
  //stutter start effect in three parts
  //(1) glow to maximum brightness
  for(int i = 0; i < 255; i++){
    analogWrite(LED, i);
    delay(3);
  }
  //(2) turn off abruptly
  analogWrite(LED, 0);
  delay(170);
  
  for(int i = 0; i < 155; i++){
    analogWrite(LED, i);
    delay(1);
  }
  analogWrite(LED, 0);
  delay(40);

  //long light on high
  analogWrite(LED, 155);
  delay(5000);

  //come close to other lamp
  for(int i = 155; i < 255; i++){
    analogWrite(LED, i);
    delay(3);
  }
  delay(5000);

  //move away from other lamp
  for(int i = 255; i > 155; i--){
    analogWrite(LED, i);
    delay(3);
  }
  delay(5000);

  //pause without light to set up for next cycle
  analogWrite(LED, 0);
  delay(3000);
}

int main(void)
{
	init();

	setup();
    
	for (;;)
		loop();
        
	return 0;
}

