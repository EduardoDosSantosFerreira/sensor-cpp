#include <Wire.h>
#include <LiquidCrystal_I2C.h>
LiquidCrystal_I2C lcd(32,16,2);
int t=3000;

int Sensor;
int Alarme;
int Led;
int Power;
int IV;
int X;

void setup()
{
 
  Power = 2;
  Sensor = 3;
  Led = 4;
  Alarme = 5;
 
  pinMode(Power, INPUT);
  pinMode(Sensor, INPUT);
  pinMode(Led, OUTPUT);
  pinMode(Alarme, OUTPUT);
  lcd.begin(16,2);
  lcd.init();
  lcd.backlight();
  Serial.begin(9600);
  lcd.setCursor(3,0);
  lcd.print("Etec Itanhaem");
  delay(2000);
  lcd.clear();
}

void loop()
{
 
  X = digitalRead(Power);
  IV = digitalRead(Sensor);
 
  if (X==HIGH){
  lcd.clear();
  lcd.setCursor(0,0);
  lcd.print("Alarme Desligado");
   delay(100);
  }
  lcd.clear();
  if (X == LOW) {
   
    lcd.setCursor(1,0);
lcd.print("Alarme Ligado");
    delay(100);
    if (IV == HIGH) {
      lcd.clear();
      TocarAlarme(1);
     
    } else {
     
     noTone(Alarme);
     
    }
 
  }
 
}

void TocarAlarme(int Y) {
 
  lcd.setCursor(5,0);
  lcd.print("PERIGO");
  lcd.setCursor(4,1);
  lcd.print("INTRUSO");
  tone(Alarme, 220);
  digitalWrite(Led, HIGH);
  delay(400);
  digitalWrite(Led, LOW);
  delay(400);
  TocarAlarme(2);
 
}
