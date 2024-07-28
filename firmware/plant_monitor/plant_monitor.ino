#include <LiquidCrystal_I2C.h> 
int moist;
LiquidCrystal_I2C lcd(0x26,16,2);

void setup()
{
  Serial.begin(115200);
  lcd.init();
  lcd.backlight();
}

void loop()
{
  int moist;
  moist = analogRead(3);
  
 
  Serial.println("Analog Value:");
  Serial.println(moist);
  lcd.setCursor(1,0);
  lcd.print("Moisture  ");
  lcd.setCursor(2,1);
  lcd.print("level:");
  lcd.print(moist);
  delay(500);
  lcd.clear();
}