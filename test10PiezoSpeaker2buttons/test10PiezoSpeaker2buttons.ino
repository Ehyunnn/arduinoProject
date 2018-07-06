/*
  파일>>Digital>>toneMelody
  학교종으로 변경해봄
 */
#include "pitches.h"
#define BUTTON1 4
#define BUTTON2 3
#define BUTTON3 2
void setup() {
  pinMode(BUTTON1,INPUT);
  pinMode(BUTTON2,INPUT);
  pinMode(BUTTON3,INPUT);
}
void loop() {
  // 위에 예제를 이용하여 버튼 3개로 서로다른 음이 
  // 나오도록 브레드보드 뷰와 코딩을 작성하시오.
  if(digitalRead(BUTTON1)){
    tone(8, NOTE_G4, 200);
    noTone(8);
  }else if(digitalRead(BUTTON2)){
    tone(8, NOTE_A5, 200);
    noTone(8);
  }else if(digitalRead(BUTTON3)){
    tone(8, NOTE_E4, 200);
    noTone(8);
  }
}
