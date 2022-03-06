
const int ldrPin = A0;
const int ardsignal = 7;
void setup() {
  Serial.begin(9600);
  pinMode(ldrPin, INPUT);
  pinMode(ardsignal, OUTPUT);
}

void loop() {
  int ldrStatus = analogRead(ldrPin);


  if (ldrStatus <= 80)
  {
    digitalWrite(ardsignal, HIGH);
   // Serial.print("Its Dark, Turn on the LED:");
    Serial.println(digitalRead(ardsignal));

  }
  else
  {
    digitalWrite(ardsignal, LOW);
    //Serial.print("Its Bright, Turn off the LED:");
    Serial.println(digitalRead(ardsignal));
  }
  


}
