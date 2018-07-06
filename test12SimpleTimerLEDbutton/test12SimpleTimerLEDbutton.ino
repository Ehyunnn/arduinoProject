#include <SimpleTimer.h>
#define BUTTON 2
#define LED 8
SimpleTimer timer;
int mState = 0;
void setup() {
  Serial.begin(9600);
  pinMode(BUTTON,INPUT);
  pinMode(LED,OUTPUT);
}
void ledON(){
  digitalWrite(LED,HIGH);
  delay(1000);
  digitalWrite(LED,LOW);
  mState=0;
}
void loop() {
  int state = digitalRead(BUTTON);
  if(mState==0 && state==1){
    timer.setTimeout(5000,ledON);
    Serial.println("Pressed BUTTON");
    mState=1;
  }
  timer.run();
}
