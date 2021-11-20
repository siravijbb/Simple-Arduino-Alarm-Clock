int tim = 0;
const int buzzer = 8;
int bt = A1;
int Btv = 0;
int notes = 987.767;

void setup() {
  Serial.begin (9600);
  pinMode (bt, INPUT);
}
void(* resetFunc) (void) = 0;  // declare reset fuction at address 0
void loop() {
  Btv = digitalRead(13);
  if (Btv != HIGH) {
    delay(100000);
    tone(8 , notes);
    Serial.print ("WAKE UP ASSHOLE");
  }


  }
