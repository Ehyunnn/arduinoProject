#include <SimpleTimer.h>
#define LED 8
SimpleTimer timer;
int count = 0;
void setup() {
  Serial.begin(9600);
  timer.setInterval(1000,ledONOFF);
  timer.setInterval(5000,printPhotoCell);
}
void ledONOFF(){
  count++;
  if(count%2==0){
    digitalWrite(LED,HIGH); 
  }else{
    digitalWrite(LED,LOW);
  }
}

void printPhotoCell(){
  Serial.print("printPotoCell:");
  Serial.println(analogRead(A0));
}

void loop() {
  timer.run();
}
