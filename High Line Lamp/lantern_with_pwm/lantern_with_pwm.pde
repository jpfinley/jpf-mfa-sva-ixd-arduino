#define LED 9

int i = 0;

void setup(){
  pinMode(LED, OUTPUT);
}

void loop(){

  //give me time to retrieve the lanterns
  delay(10000);
  
  //stutter start effect in three and a half parts
  //(1) glow to maximum brightness
  for(int i = 0; i < 255; i++){
    analogWrite(LED, i);
    delay(2);
  }
  //(2) turn off abruptly
  analogWrite(LED, 0);
  delay(30);
  
  //(3a) glow to maximum brightness
  analogWrite(LED, 255);
  delay(450);
  
  //(3b) dim to nominalbrightness
  for(int i = 255; i > 155; i--){
    analogWrite(LED, i);
    delay(7);
  }

  //long light on high
  analogWrite(LED, 155);
  delay(9000);

  //come close to other lamp
  //go max bright for 5 seconds
  for(int i = 155; i < 255; i++){
    analogWrite(LED, i);
    delay(3);
  }
  delay(5000);

  //move away from other lamp
  //dim down to nominal brightness
  for(int i = 255; i > 155; i--){
    analogWrite(LED, i);
    delay(5);
  }
  //for 10 minutes
  delay(6000000);

  //pause without light to set up for next cycle
  analogWrite(LED, 0);
  delay(3000);
}
