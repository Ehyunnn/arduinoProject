byte digits[10][7] = {
  //{A B C D E F G}// 0점등,1소등
  {0,0,0,0,0,0,1},//0
  {1,0,0,1,1,1,1},//1
  {0,0,1,0,0,1,0},//2
  {0,0,0,0,1,1,0},//3
  {1,0,0,1,1,0,0},//4
  {0,1,0,0,1,0,0},//5
  {0,1,0,0,0,0,0},//6
  {0,0,0,1,1,1,1},//7
  {0,0,0,0,0,0,0},//8
  {0,0,0,0,1,0,0},//9
  //3~9까지 배열추가하고 카운트 점등 완성하기.
};
void setup() {
  for(int i=2;i<10;i++){
    pinMode(i,OUTPUT);//A~G,DP
  }
  
  digitalWrite(9,HIGH);//DP 1 >> off
}


void loop() {
  
  for(int i=0;i<10;i++){
    setNum(i);
    if(i%2==0){
      digitalWrite(9,LOW);
    }else{
      digitalWrite(9,HIGH);
    }
    delay(1000);
  }
}
void setNum(int num){
  int pin = 2;
  for(int i=0;i<7;i++){
    digitalWrite(pin+i,digits[num][i]);
  }
}

