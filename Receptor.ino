#include <LiquidCrystal.h>

const int rs=5, en=7, d4=9, d5=10, d6=11, d7=12;
LiquidCrystal lcd_1(rs, en, d4, d5, d6, d7);
char sinal =" ";
int cont = 0;

void setup() {
  Serial.begin(9600);
  lcd_1.begin(16,2);
  lcd_1.clear();
  lcd_1.noAutoscroll();
  
}

void loop() {
  
  
  while(cont<3){
  lcd_1.setCursor(0, 0);
  lcd_1.println("LETRA");
  if(Serial.available()>0){
     sinal = Serial.read();
     Serial.println(sinal);
  }
    lcd_1.setCursor(cont, 1);
    lcd_1.println(sinal);
  
  cont++;
  
  }  
  cont = 0;
  delay(2000);
}
