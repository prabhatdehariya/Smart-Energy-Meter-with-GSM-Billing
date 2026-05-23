#include <LiquidCrystal.h>

LiquidCrystal lcd(7, 8, 9, 10, 11, 12);

float units = 0;
float bill = 0;

void setup() {
  lcd.begin(16,2);
  Serial.begin(9600);
}

void loop() {

  units = units + 0.5;

  bill = units * 5;

  lcd.setCursor(0,0);
  lcd.print("Units:");
  lcd.print(units);

  lcd.setCursor(0,1);
  lcd.print("Bill:");
  lcd.print(bill);

  delay(2000);

  Serial.println("Electricity Bill SMS Sent");
}
