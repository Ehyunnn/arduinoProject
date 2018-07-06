#define TRIG 2
#define ECHO 3
void setup() {
  Serial.begin(9600);
  pinMode(TRIG,OUTPUT);
  pinMode(ECHO,INPUT);
}
void loop() {
  digitalWrite(TRIG,LOW);
  delayMicroseconds(2);
  digitalWrite(TRIG,HIGH);
  delayMicroseconds(10);
  digitalWrite(TRIG,LOW);
  long distance = pulseIn(ECHO,HIGH)/58.2;
  if (distance >= 200 || distance <= 0){
    Serial.println("Out of range");
  }
  else {
    Serial.print(distance);
    Serial.println(" cm");
  }
  delay(500);
  //mission : LED red,green and piezo speaker 이용하여 추가 구현하시오.
  //mission2 : LCD 모니터를 이용하여 거리를 표기하시오.
}
