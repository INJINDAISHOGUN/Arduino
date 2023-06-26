#include "DHT.h"

DHT dht;

#include <LiquidCrystal_I2C.h>
LiquidCrystal_I2C lcd(0x27, 16, 2);

void setup() {
  Serial.begin(9600);
  Serial.println();
  Serial.println("Status\tHumidity (%)\tTemperature (C)\t(F)");
  dht.setup(2);
  lcd.begin();

}

void loop() {
delay(dht.getMinimumSamplingPeriod());

float humidity = dht.getHumidity(); // ดึงค่าความชื้น
float temperature = dht.getTemperature(); // ดึงค่าอุณหภูมิ

Serial.print(dht.getStatusString());
Serial.print("\t");
Serial.print(humidity, 1);
Serial.print("\t\t");
Serial.print(temperature, 1);
Serial.print("\t\t");
Serial.println(dht.toFahrenheit(temperature), 1);
lcd.setCursor(0, 0);
lcd.print("Hum:      ");
lcd.setCursor(4, 0);
lcd.print(humidity);
lcd.setCursor(9, 0);
lcd.print("%");
lcd.setCursor(0, 1);
  
lcd.print("Temp:      ");
lcd.setCursor(5, 1);
lcd.print(temperature);
lcd.setCursor(9, 1);
lcd.print("C");/*แสดงอุณหภูมิหน่วย เซลเซียส*/
  
lcd.print(dht.toFahrenheit(temperature), 1);
lcd.print("F");/*แสดงอุณหภูมิหน่วย ฟาเรนไฮต์*/
delay(100);

}
