void setup() {
  // put your setup code here, to run once:
  pinMode(11,OUTPUT);
  Serial.begin(9600);
}

void loop() {
  int ar= map(analogRead(A0), 0, 1023, 0, 500);
  int a0=ar/10;
  int a1=ar%10;
  Serial.println("Volts:"+(String)a0 + "." + String(a1));
  delay(10);
}
