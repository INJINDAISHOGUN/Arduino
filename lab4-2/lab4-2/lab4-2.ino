#include <Servo.h>
Servo myservo;
int vr = 7;
int val;
void setup()
{
myservo.attach(3);
}
void loop()
{
val = analogRead(vr);
val = map(val,0,1023,0,180);
myservo.write(val);
delay(10);
}
