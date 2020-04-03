// Definine the libraries
// All the links to the library are in the README.md section.
#include <Wire.h>
#include<LCD.h>
#include <LiquidCrystal_I2C.h>
LiquidCrystal_I2C lcd(0x27, 2, 1, 0, 4, 5, 6, 7, 3,POSITIVE);

// Defining the PIN connection 
#define echoPin 6
#define trigPin 5
#define buzzer 11

// Declaring the variables
long duration;
long distance;

//Setup
void setup()
{
  Serial.begin(9600);
  lcd.begin(16, 2); 
  pinMode(echoPin, INPUT);
  pinMode(trigPin,OUTPUT);
  pinMode(buzzer,OUTPUT);
}

//Loop
void loop()
{
  digitalWrite(trigPin,100);
  delayMicroseconds(2);
  digitalWrite(trigPin,HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin,LOW);
  duration=pulseIn(echoPin,HIGH);
  distance=int(0.017*duration);
  if(distance<=18)
  {
  
  tone(buzzer,450);
  delay(1000);
  noTone(buzzer);
  delay(1000);
lcd.print("!!CORONA ALERT!!"); 
delay(2000);
lcd.clear();
lcd.setCursor(0, 0);
lcd.print("WASH YOUR HANDS ");
lcd.setCursor(0, 0);
delay(2000);
lcd.setCursor(0, 2);
lcd.print(" FOR 20 SECONDS");
lcd.setCursor(0, 0);
delay(3000);
lcd.clear();
tone(buzzer,450);
  delay(750);
  noTone(buzzer);
  delay(750);
lcd.print("       20       ");
lcd.setCursor(0, 0);
delay(1500);
lcd.clear();
tone(buzzer,450);
  delay(750);
  noTone(buzzer);
  delay(750);
lcd.print("       19       ");
lcd.setCursor(0, 0);
delay(1500);
lcd.clear();
tone(buzzer,450);
  delay(750);
  noTone(buzzer);
  delay(750);
lcd.print("       18       ");
lcd.setCursor(0, 0);
delay(1500);
lcd.clear();
tone(buzzer,450);
  delay(750);
  noTone(buzzer);
  delay(750);
lcd.print("       17        ");
lcd.setCursor(0, 0);
delay(1500);
lcd.clear();
tone(buzzer,450);
  delay(750);
  noTone(buzzer);
  delay(750);
lcd.print("       16       ");
lcd.setCursor(0, 0);
delay(1500);
lcd.clear();
tone(buzzer,450);
  delay(750);
  noTone(buzzer);
  delay(750);
lcd.print("       15       ");
lcd.setCursor(0, 0);
delay(1500);
lcd.clear();
tone(buzzer,450);
  delay(750);
  noTone(buzzer);
  delay(750);
lcd.print("       14       ");
lcd.setCursor(0, 0);
delay(1500);
lcd.clear();
tone(buzzer,450);
  delay(750);
  noTone(buzzer);
  delay(750);
lcd.print("       13       ");
lcd.setCursor(0, 0);
delay(1500);
lcd.clear();
tone(buzzer,450);
  delay(750);
  noTone(buzzer);
  delay(750);
lcd.print("       12       ");
lcd.setCursor(0, 0);
delay(1500);
lcd.clear();
tone(buzzer,450);
  delay(750);
  noTone(buzzer);
  delay(750);
lcd.print("       11       ");
lcd.setCursor(0,0 );
delay(1500);
lcd.clear();
tone(buzzer,450);
  delay(750);
  noTone(buzzer);
  delay(750);
lcd.print("       10       ");
lcd.setCursor(0, 0);
delay(1500);
lcd.clear();
tone(buzzer,450);
  delay(750);
  noTone(buzzer);
  delay(750);
lcd.print("       9        ");
lcd.setCursor(0, 0);
delay(1500);
lcd.clear();
tone(buzzer,450);
  delay(750);
  noTone(buzzer);
  delay(750);
lcd.print("       8        ");
lcd.setCursor(0, 0);
delay(1500);
lcd.clear();
tone(buzzer,450);
  delay(750);
  noTone(buzzer);
  delay(750);
lcd.print("       7        ");
lcd.setCursor(0, 0);
delay(1500);
lcd.clear();
tone(buzzer,450);
  delay(750);
  noTone(buzzer);
  delay(750);
lcd.print("       6         ");
lcd.setCursor(0, 0);
delay(1500);
lcd.clear();
tone(buzzer,450);
  delay(750);
  noTone(buzzer);
  delay(750);
lcd.print("       5        ");
lcd.setCursor(0, 0);
delay(1500);
lcd.clear();
tone(buzzer,450);
  delay(750);
  noTone(buzzer);
  delay(750);
lcd.print("       4        ");
lcd.setCursor(0, 0);
delay(1500);
lcd.clear();
tone(buzzer,450);
  delay(750);
  noTone(buzzer);
  delay(750);
lcd.print("       3        ");
lcd.setCursor(0, 0);
delay(1500);
lcd.clear();
tone(buzzer,450);
  delay(750);
  noTone(buzzer);
  delay(750);
lcd.print("       2        ");
lcd.setCursor(0, 0);
delay(1500);
lcd.clear();
tone(buzzer,450);
  delay(750);
  noTone(buzzer);
  delay(750);
lcd.print("       1        ");
lcd.setCursor(0, 0);
delay(1500);
lcd.clear();
tone(buzzer,450);
  delay(750);
  noTone(buzzer);
  delay(750);
lcd.print("       0        ");
lcd.setCursor(0, 0);
delay(1000);
lcd.clear();
tone(buzzer,450);
  delay(750);
  noTone(buzzer);
  delay(750);
lcd.print("(::THANK YOU::)");
lcd.setCursor(0, 0);
delay(2000);
lcd.clear();
lcd.print("...SAVE WATER...");
lcd.setCursor(0, 0);
delay(2000);
lcd.clear();
lcd.print(" (: STAY SAFE :) ");
delay(100000);
lcd.clear();
tone(buzzer,450);
  delay(750);
  noTone(buzzer);
  delay(750);
  }
  else
  {
  digitalWrite(buzzer, LOW);
  }
  Serial.println(distance);delay(50);                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                  
}
