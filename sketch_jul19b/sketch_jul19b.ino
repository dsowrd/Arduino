#include <SoftwareSerial.h>
int blueTx = 2;
int blueRx = 3;
SoftwareSerial mySerial(blueTx, blueRx);
String myString = "";

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  mySerial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  while(mySerial.available()){
     char myChar = (char)mySerial.read();
     myString += myChar;
     if(myChar == "\n"){
      Serial.println("input value : " + myString);
      myString = "";
     }
  }
}
