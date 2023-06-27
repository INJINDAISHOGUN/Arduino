#include <Servo.h>
Servo myservo;

void setup()
{
myservo.attach(3);//กำหนดขา
}
void loop()
{
myservo.write(0); // สั่งให้ Servo หมุนไปที่ 0 องศา
delay(1000);
myservo.write(90); // สั่งให้ Servo หมุนไปที่ 90 องศา
delay(1000);
myservo.write(180); // สั่งให้ Servo หมุนไปที่ 180 องศา
delay(1000);
}
