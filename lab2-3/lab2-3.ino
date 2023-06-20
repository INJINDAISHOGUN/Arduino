#define red 3
#define green 5
#define blue 6
int i = 0;
void setup(){
  Serial.begin(9600);
  pinMode(red, OUTPUT);
  pinMode(green, OUTPUT);
  pinMode(blue, OUTPUT);
}
void loop() {
  if (Serial.available() > 0){
    char In = Serial.read();
   if (In == 'a'){
      RGB(255,0,0);
    }
  else if(In == 's'){
      RGB(0,255,0);
    }
  else if(In == 'd'){
      RGB(0,0,255);
    }
  else if(In == 'f'){
      RGB(255,255,255);
    }
  }
}
void RGB(int R, int G, int B){
  analogWrite(red, R);
  analogWrite(green, G);
  analogWrite(blue, B);
}
