// Traffic Sign :type pedestrian
// 歩行者用押釦信号機
// Kyosuke TAKENAKA

int pedRed = 1;
int pedBlu = 0;
int carRed = 10;
int carYel = 9;
int carBlu = 8;
int pedButNum = 6;
int soundPin = 12;

boolean pedBut = true;

void setup() {
  for(int i=0; i<=13; i++) {
    pinMode(i,OUTPUT);
    digitalWrite(i,LOW);
  }
  // スイッチピンをプルアップ
  pinMode(pedButNum,INPUT);
  digitalWrite(pedButNum,HIGH);
  //最初の信号色
  digitalWrite(carRed,LOW);
  digitalWrite(carYel,LOW);
  digitalWrite(carBlu,HIGH);
  digitalWrite(pedRed,HIGH);
  digitalWrite(pedBlu,LOW);
}

void loop() {
  if(digitalRead(pedButNum)==LOW) {
    digitalWrite(carBlu,LOW);
    digitalWrite(carYel,HIGH);
    delay(1000);
    digitalWrite(carYel,LOW);
    digitalWrite(carRed,HIGH);
    delay(1000);
    digitalWrite(pedRed,LOW);
    digitalWrite(pedBlu,HIGH);
    // 渡る音
    tone(soundPin,1200,100);
    delay(400);
    tone(soundPin,950,200);
    delay(700);
    tone(soundPin,1200,100);
    delay(300);
    tone(soundPin,1200,100);
    delay(150);
    tone(soundPin,950,200);
    delay(700);

    tone(soundPin,1200,100);
    delay(400);
    tone(soundPin,950,200);
    delay(700);
    tone(soundPin,1200,100);
    delay(300);
    tone(soundPin,1200,100);
    delay(400);
    // 点滅
    digitalWrite(pedBlu,LOW);
    tone(soundPin,700,400);
    delay(400);
    digitalWrite(pedBlu,HIGH);
    tone(soundPin,1000,400);
    delay(400);
    digitalWrite(pedBlu,LOW);
    delay(400);
    digitalWrite(pedBlu,HIGH);
    tone(soundPin,700,400);
    delay(400);
    digitalWrite(pedBlu,LOW);
    tone(soundPin,1000,400);
    delay(400);
    digitalWrite(pedBlu,HIGH);
    delay(400);

    digitalWrite(pedRed,HIGH);
    delay(1000);
    digitalWrite(carRed,LOW);
    digitalWrite(carBlu,HIGH);
    digitalWrite(pedRed,HIGH);
    delay(5000);
  }
}
