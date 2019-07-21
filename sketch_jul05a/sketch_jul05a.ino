int led1=13;
int led2=12;
int led3=11;
int led4=10;
int led5=9;
#define time 200

void setup() {
  // put your setup code here, to run once:
  for(int i=13;i>=9;i--)
  {
    pinMode(i,OUTPUT);
  }
}

void loop() {
  // put your main code here, to run repeatedly:
  for(int i=13;i>=9;i--)
  {
    digitalWrite(i,HIGH);
    delay(time);
  }
  for(int i=9;i<14;i++)
  {
    digitalWrite(i,LOW);
    delay(time);
  }
}
