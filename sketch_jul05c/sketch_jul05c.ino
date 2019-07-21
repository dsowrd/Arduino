void setup() {
  // put your setup code here, to run once:
  pinMode(13,INPUT_PULLUP);
  for(int i=12;i>7;i--){
    pinMode(i,OUTPUT);
  }
}

int cRed=12;
int cYellow=11;
int cGreen=10;
int pRed=9;
int pGreen=8;

void loop() {
  // put your main code here, to run repeatedly:
  int sw=digitalRead(13);
  if(sw==1){
    digitalWrite(pRed,HIGH);
    digitalWrite(pGreen,LOW);
    digitalWrite(cRed,LOW);
    digitalWrite(cYellow,LOW);
    digitalWrite(cGreen,HIGH);
  } else {
    digitalWrite(cGreen,LOW);
    digitalWrite(cYellow,HIGH);
    delay(1000);
    digitalWrite(cYellow,LOW);
    digitalWrite(pRed,LOW);
    digitalWrite(pGreen,HIGH);
    digitalWrite(cRed,HIGH);
    delay(5000);
    for(int i=0;i<3;i++){
      digitalWrite(pGreen,LOW);
      delay(1000);
      digitalWrite(pGreen,HIGH);
      delay(1000);
    }
  }

}
