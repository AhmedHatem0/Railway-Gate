const int ledPin = 8;
const int ldrPin = A0;
const int ardsignal = 7;
void setup() {
  Serial.begin(9600);
  pinMode(ledPin, OUTPUT);
  pinMode(ldrPin, INPUT);
  pinMode(ardsignal, INPUT);
}

void loop() {
  int ldrStatus = analogRead(ldrPin);
  bool train = digitalRead(ardsignal);
  Serial.println(train);
  if(train){
  if (ldrStatus <= 80)
  {
    digitalWrite(ledPin, HIGH);
    Serial.print("Its Dark, Turn on the LED:");
    Serial.println(ldrStatus);

  }
  else
  {
    digitalWrite(ledPin, LOW);
    Serial.print("Its Bright, Turn off the LED:");
    Serial.println(ldrStatus);
  }
  }
  else{
    digitalWrite(ledPin, LOW);
  }

}
