#include <stdio.h>
#define TIME 500

char msg[] = "loop()...";
void setup() {
  Serial.begin(9600);
  Serial.println("setup()...");  
  
}
String getStr(){

  return "yangssem";
}
void loop() {
  Serial.println(getStr()); 
  String str = getStr();
  Serial.println(str.substring(0,2)); 
  Serial.println(str.substring(2,4)); 
  Serial.println(str.substring(4,6)); 
  //char msg[] = "loop()...";
//  Serial.print(msg); 
//  Serial.print("yangssem");     
//  Serial.print("\t");             
//  Serial.print("arduino");  
//  Serial.print("\t");      
//  Serial.print("Hello"); 
  //Serial.print("\n"); 
  delay(TIME);
}
