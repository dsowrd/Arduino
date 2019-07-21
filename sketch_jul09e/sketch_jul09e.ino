#define NOTE_C1  262
#define NOTE_D1  294
#define NOTE_E1  330
#define NOTE_F1  349
#define NOTE_G1  392
#define NOTE_A1  440
#define NOTE_B1  494
#define NOTE_C2  523
int music[]={
  NOTE_G1, NOTE_G1, NOTE_A1, NOTE_A1, NOTE_G1, NOTE_G1, NOTE_E1, NOTE_G1, NOTE_G1, NOTE_E1, NOTE_E1, NOTE_D1,
};
int tonelen[]{
  4,4,4,4,4,4,2,
  4,4,4,4,2
};
int alllen=12;

void setup() {
  // put your setup code here, to run once:
  pinMode(13, INPUT_PULLUP);

}

void loop() {
  // put your main code here, to run repeatedly:
  if(!digitalRead(13)){
    playmusic();
  }
}

void playmusic(){
  for(int i = 0; i < alllen; i++){
    tone(8, music[i], 1000/tonelen[i]);
    delay(1000/tonelen[i]*1.3);
  }
}
