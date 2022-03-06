int outter=7;
int inner=8;
int count=0;
boolean state1 = true;
boolean state2 = true;
boolean insideState = false;
boolean outsideIr=false;
boolean isPeopleExiting=false;
int i=1;
void setup() {
Serial.begin(9600);
pinMode(outter, INPUT);
pinMode(inner, INPUT);
}

void loop() {
  
  if (!digitalRead(outter) && i==1 && state1){
     outsideIr=true;
     delay(100);
     i++;
     state1 = false;
  }

   if (!digitalRead(inner) && i==2 &&   state2){
     Serial.println("Entering into room");
     outsideIr=true;
     delay(100);
     i = 1 ;
     count++;
     Serial.print("No of persons inside the room: ");
     Serial.println(count);
     state2 = false;
  }

   if (!digitalRead(inner) && i==1 && state2 ){
     outsideIr=true;
     delay(100);
     i = 2 ;
     state2 = false;
  }

  if (!digitalRead(outter) && i==2 && state1 ){
     Serial.println("Exiting from room");
     outsideIr=true;
     delay(100);
     count--;
       Serial.print("No of persons inside the room: ");
       Serial.println(count);
     i = 1;
     state1 = false;
  }  

    if (digitalRead(outter)){
     state1 = true;
    }

     if (digitalRead(inner)){
     state2 = true;
    }
  
}
