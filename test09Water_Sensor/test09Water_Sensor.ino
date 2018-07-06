#include <SimpleTimer.h>
#include <Servo.h>

Servo myservo;
SimpleTimer timer;
int reg = 0;
void setup() {
  Serial.begin(9600);
  myservo.attach(9);
}
void myservoOff(){
  myservo.write(20);
  Serial.println("myservoOff");
}
void loop() {
  reg = analogRead(A0);
  Serial.println(reg);
  delay(1000);
  if(reg>=20 ){
    myservo.write(180);
    //timer.setTimeout(5000,myservoOff);    
  }else{
   myservoOff();
  }
  //timer.run();
}
