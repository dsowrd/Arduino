void setup() {
  Serial.begin(9600);
  pinMode(11, OUTPUT);
}

void loop() {
  for(int i = 0; i < 1024; i++){
    analogWrite(11, i);
    Serial.println((String)i);
    delay(10);
  }
}
