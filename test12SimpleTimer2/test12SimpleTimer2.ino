#include <SimpleTimer.h>

SimpleTimer timer;
int count = 0;
void setup() {
  Serial.begin(9600);
  timer.setInterval(1000,testPrint);
  timer.setInterval(5000,testPrint2);
}
void testPrint(){
  count++;
  Serial.print("Plus:");
  Serial.println(count);  
}
void testPrint2(){
  count--;
  Serial.print("Minus:");
  Serial.println(count);  
}
void loop() {
  timer.run();
}
