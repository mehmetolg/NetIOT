#include <LiquidCrystal.h>
LiquidCrystal lcd(12,11,5,4,3,2);
String kelime;
int sayac=0;
 char harf[32];
void setup() {
  // mehmet olgun
Serial.begin(9600);
lcd.clear();
}
void islem()
{
   int gelen=Serial.read();



  harf[sayac]=gelen;
 


  kelime+=harf[sayac];
 
 sayac++;
  lcd.begin(16,2);
lcd.clear();
lcd.print(kelime);

}
void loop() {
  // put your main code here, to run repeatedly:

if(Serial.available())
{
islem();
 if(sayac>16)
  {
    lcd.setCursor(0,1);
  }
delay(500);

}
else
{
   kelime="";
   
}
}
