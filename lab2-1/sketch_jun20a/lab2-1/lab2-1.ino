int i=0;
void setup(){
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  if (Serial.available () >0) {
    char In = Serial.read();
    Serial.print("num i:") ;
    Serial.println(i);
    Serial.print("Count data:") ;
    Serial.println(Serial.available());
    Serial.print("character:");
    Serial.println(In);
    delay(1000) ;
    i++;
}
}
