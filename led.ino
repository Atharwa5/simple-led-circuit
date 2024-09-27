void setup(){

  #define ledred 0
  #define ledgreen 1 
  
  pinMode(ledred, OUTPUT);
  pinMode(ledgreen, OUTPUT);


}

void loop(){

 digitalWrite(ledgreen,LOW);
 digitalWrite(ledred, HIGH);
  delay(1000);
 digitalWrite(ledgreen, HIGH);
 digitalWrite(ledred, LOW);
  delay(1000);


}
