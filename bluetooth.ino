/*
 * Bluetooth Basic: Led On Off
 * Coder - Toni Anguera
 * This program lets you to control the LED on the pin 13 using the HC05 bluetooth module
 */

//******  Includes  ****************
#include <SoftwareSerial.h>

//******  Variables  ***************
int led=13;
char state='c';

void setup(){
  Serial.begin(38400);

  pinMode(led,OUTPUT);
  digitalWrite(led,HIGH);
  delay(2000);
  digitalWrite(led,LOW);
  
}

void loop(){
  if(Serial.available()>0){
  state = Serial.read();
  if (state =='a'){
    digitalWrite(led,HIGH);
  }
  if(state=='b'){
    digitalWrite(led,LOW);
  }
 }
 
}  
