#include <SoftwareSerial.h>
int led13=13;
char estado='c';

void setup(){
  Serial.begin(38400);

  pinMode(led13,OUTPUT);
  digitalWrite(led13,HIGH);
  delay(2000);
  digitalWrite(led13,LOW);
  
}

void loop(){
 if(Serial.available()>0){
 estado = Serial.read();
// }
 if (estado =='a'){
   digitalWrite(led13,HIGH);
//   delay(3000);
//   digitalWrite(led13,LOW);
  // delay(1000);
  }
if(estado=='b'){
   digitalWrite(led13,LOW);
  }
 }
 
}  
