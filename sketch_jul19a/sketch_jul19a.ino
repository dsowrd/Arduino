String mystring="";
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  char my;
  while(Serial.available()){
    my = (char)Serial.read();
    mystring += my;
    delay(5);
  }
  if(!mystring.equals("")){
    Serial.println(mystring);
    mystring="";
  }
}
