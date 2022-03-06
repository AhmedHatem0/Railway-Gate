const int readPOT = 2;
const int ldrPin = A0;
const int sendPOT = 7;
void setup() {
  Serial.begin(9600);
  pinMode(sendPOT, OUTPUT);
  pinMode(ldrPin, INPUT);
  pinMode(readPOT, INPUT);
}

void loop() {
  int ldrStatus = analogRead(ldrPin);

  if(ldrStatus<=80)
  {
      Serial.println(0);
      digitalWrite(sendPOT,LOW);  
  }
  else{
          Serial.println(1);
      digitalWrite(sendPOT,HIGH);
  }

  Serial.print("A5 is: elly howa reading el potentio ");
  Serial.println(digitalRead(readPOT));

}
