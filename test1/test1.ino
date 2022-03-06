int irPin=7;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(irPin, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
digitalWrite(irPin, HIGH);
delay(1000);
digitalWrite(irPin, LOW);
delay(1000);
}
