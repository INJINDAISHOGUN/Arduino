int i = 0;
void setup(){
  Serial.begin(9600);
}
void loop(){
  if(Serial.available()>0){
    char In = Serial.read();
    Serial.print("Hello World");
    Serial.println(i);
    Serial.print("Good Bye");
    Serial.println(Serial.available());
    Serial.print("Character");
    Serial.println(In);
    delay(1000);
    i++;
  }
}
