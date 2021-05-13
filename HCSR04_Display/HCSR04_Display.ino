//Created by Adhi MF with source from internet
//Electrical Engineering'19
//please contact me if this code has some problem, thankyou :)
//Enjoy!

#include <LiquidCrystal.h>
LiquidCrystal lcd(2,3,4,5,6,7); //LiquidCrystal lcd(RS,E,D4,D5,D6,D7);
const int trigPin = 12;
const int echoPin = 11;
long duration;
float distanceCm;

void setup() {
  lcd.begin(16,2);
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  lcd.setCursor(0,0);
  lcd.print("Pengukuran ");
  lcd.setCursor(0,1);
  lcd.print("Jarak ");
  delay(2000);
  lcd.clear();
  lcd.setCursor(0,0);
  lcd.print("Kelompok 4");
  lcd.setCursor(0,1);
  lcd.print("EL4301");
  delay(2000);
  lcd.clear();
}

void loop() {
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);
  duration = pulseIn(echoPin, HIGH);
  distanceCm = ((float)duration*0.034)/2;
  lcd.setCursor(0,0);
  lcd.print("Pengukuran Jarak");
  delay(10);
  lcd.setCursor(0,1);
  lcd.print("Jarak(Cm):");
  lcd.print(distanceCm);
  delay(10);
}
