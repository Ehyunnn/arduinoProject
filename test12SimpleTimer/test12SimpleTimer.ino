#include <SimpleTimer.h>

SimpleTimer timer;

void setup() {
  Serial.begin(9600);
  //timer.setTimeout(5000,testPrint);
  
}
void testPrint(){
  Serial.println("ON");
  
}

void loop() {
  timer.setTimeout(5000,testPrint);
  timer.run();

}
