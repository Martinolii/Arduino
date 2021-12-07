#include <LiquidCrystal.h>
int rs =12;
int e=11;
int d4=5;
int d5 =4;
int d6=3;
int d7 =2;
int numero =0;

LiquidCrystal lcd(rs, e, d4, d5, d6, d7);

void setup(){
  lcd.begin (16,2);
}

void loop(){
  lcd.setCursor(0,0);
  lcd.print("Mira como cuento");
   lcd.setCursor(0,1);
   lcd.print(numero);
   numero++;
   delay(500);
   if (numero >10){
    lcd.clear();
   }
}
