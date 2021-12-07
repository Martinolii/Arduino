#include <LiquidCrystal.h>
//LCD
int rs =12;
int e=11;
int d4=5;
int d5 =4;
int d6=3;
int d7 =2;
int dt=500;

// DTH
#include <DHT.h>
#include <DHT_U.h>

#define Type DHT11 
int dhtPin =8;  ////////Pin 8 del Arduino
DHT HT(dhtPin, Type);
int humidity;
float tempC;
float tempF;


LiquidCrystal lcd(rs, e, d4, d5, d6, d7);// lc, declarando sus variables

void setup(){
  lcd.begin (16,2);
  Serial.begin(9600);
  HT.begin();
}

void loop(){
   
    humidity =HT.readHumidity();
    tempC = HT.readTemperature();
    //tempF = HT. read(Temperature(true);
    Serial.print("Humedad relativa;");
    Serial.print(humidity);
    Serial.print("%/ Temperatua:");
    Serial.print(tempC);
    Serial.print("°C");
    Serial.print(tempF);
    Serial.print("F");
    delay(dt);
    
    lcd.setCursor(0,0);
    lcd.print("Humedad: ");
    lcd.print(humidity);
    lcd.print("%");

    lcd.setCursor(0,1);
    lcd.print("Temp. :");
    lcd.print(tempC);
    lcd.print("*C");
    delay (dt);
    lcd.clear();    
}
