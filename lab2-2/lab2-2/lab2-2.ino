#define sw 4
int val;

void setup() {
  Serial.begin(9600);
  pinMode(sw, INPUT);
}

void loop() {
  val = digitalRead(sw);
  if (val == 0){
    Serial.println("Hello World");
  }
  else{
    Serial.println("Good Bye"); delay(200);
  }

}
