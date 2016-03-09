
#include <LiquidCrystal.h>

// initialize the library with the numbers of the interface pins
LiquidCrystal lcd(3, 2, 5, 6, 7, 8);

void setup() {
  // set up the LCD's number of columns and rows:
  lcd.begin(16, 2);
  // Print a message to the LCD.
  lcd.print("Fuck you Aleks");
}

void loop() {
  // set the cursor to column 0, line 1
  // (note: line 1 is the second row, since counting begins with 0):
  lcd.setCursor(0, 1);
  // print the number of seconds since reset:
  
  lcd.print("SUCK");
  delay(1000);
  lcd.setCursor(0, 1);
  lcd.print("        ");
  lcd.setCursor(0, 1);
  
  
  lcd.print("MY");
  delay(1000);
  lcd.setCursor(0, 1);
  lcd.print("        ");
  lcd.setCursor(0, 1);

  
  lcd.print("ARDUINO");
  delay(1000);
  lcd.setCursor(0, 1);
  lcd.print("          ");
  lcd.setCursor(0, 1);
}
