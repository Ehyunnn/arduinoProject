byte digits[3][7] = {
  //{A B C D E F G}// 0점등,1소등
  {0,0,0,0,0,0,1},//0
  {1,0,0,1,1,1,1},//1
  {0,0,1,0,0,1,0},//2
  //3~9까지 배열추가하고 카운트 점등 완성하기.
};
void setup() {
  
  pinMode(2,OUTPUT);//A
  pinMode(3,OUTPUT);//B
  pinMode(4,OUTPUT);//C
  pinMode(5,OUTPUT);//D
  pinMode(6,OUTPUT);//E
  pinMode(7,OUTPUT);//F
  pinMode(8,OUTPUT);//G
  pinMode(9,OUTPUT);//DP .
  digitalWrite(9,HIGH);//DP 1 >> off
}


void loop() {
  int pin = 2;
  for(int i=0;i<7;i++){
    digitalWrite(pin+i,digits[2][i]);
  }
  
}
