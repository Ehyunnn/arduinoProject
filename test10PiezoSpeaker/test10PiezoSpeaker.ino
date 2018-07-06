/*
  파일>>Digital>>toneMelody
  학교종으로 변경해봄
 */
#include "pitches.h"
int melody[] = {
  NOTE_G4, NOTE_G4,//솔,솔
  NOTE_A5, NOTE_A5,//라,랄
  NOTE_G4, NOTE_G4,//솔,솔
  NOTE_E4,//미
  NOTE_G4, NOTE_G4,
  NOTE_E4, NOTE_E4,
  NOTE_D4,
  0
};
// 음 길이배열
int noteDurations[] = {
  1,1,
  1,1,
  1,1,
  2,
  1,1,
  1,1,
  1,1,
  3
};

void setup() {
  for (int thisNote = 0; thisNote < 13; thisNote++) {
    int noteDuration = 1000 / noteDurations[thisNote];
    tone(8, melody[thisNote], noteDuration);
    int pauseBetweenNotes = noteDuration * 1.30;
    delay(pauseBetweenNotes);
    noTone(8);
  }
}

void loop() {
  // 위에 예제를 이용하여 버튼 3개로 서로다른 음이 
  // 나오도록 브레드보드 뷰와 코딩을 작성하시오.
}
