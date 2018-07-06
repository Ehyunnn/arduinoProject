#include <Wire.h> 
#include <LiquidCrystal_I2C.h>
//LCD address 확인하기 >>> test08LCD_i2cScanner실행  또는
//http://blog.naver.com/no1_devicemart/220836497937 따라하기.
//1.download zip: https://github.com/fdebrabander/Arduino-LiquidCrystal-I2C-library
//2.스케치 >>  라이브러리 포함하기 >> .zip라이브러리 추가  >> 
//3.LiquidCrystal_I2C.zip 경로 잡아주면 됨.

LiquidCrystal_I2C lcd(0x3F,16,2);  
// set the LCD address to 0x27 or 0x3f for a 16 chars and 2 line display

void setup(){
  lcd.begin();   //or lcd.begin()        
  lcd.backlight();
  lcd.print("Hello, yangssem!");
}

void loop(){

  lcd.setCursor(0, 1);
  lcd.print(millis() / 1000);
}
