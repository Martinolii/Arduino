#include <LiquidCrystal.h>
int rs =12;
int e=11;
int d4=5;
int d5 =4;
int d6=3;
int d7 =2;
int numero =0;

LiquidCrystal lcd(rs, e, d4, d5, d6, d7);// lc, declarando sus variables

void setup(){
  lcd.begin (16,2);
}

void loop(){
  lcd.setCursor(0,0);// Pantalla 0, renglon 0
  lcd.print("Mira como cuento");//Imprime el valor en la lcd
   lcd.setCursor(0,1);// Pantalla 0, renglon 1
   lcd.print(numero);
   numero++;// suma 1 cada segundo
   delay(500);
   if (numero <10){// si numero es mayor a 10, se limpia la pantalla
    lcd.clear();
   }
}
