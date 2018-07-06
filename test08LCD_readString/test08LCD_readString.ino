#include <LiquidCrystal.h>
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);
static String userName = "yangssem";
void setup() {
  Serial.begin(9600);
  lcd.begin(16, 2);
}
void loop() {
  lcd.setCursor(0, 0);
  if(Serial.available()){
      userName = Serial.readString(); 
      lcd.clear();    
      lcd.print("hello,"+userName);
      //delay(3000);   
   }else{
      lcd.print("hello,"+userName);   
   }
  lcd.setCursor(0, 1);
  lcd.print(millis() / 1000);
  
  
  
}
