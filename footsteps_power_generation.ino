#include <Wire.h>
#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x27, 16, 2);

const int piezoPin = A0;

long stepCount = 0;
float voltage = 0;
int threshold = 50;   // Adjust based on your circuit

void setup()
{
  lcd.init();
  lcd.backlight();

  lcd.setCursor(0,0);
  lcd.print("FOOTSTEP POWER");
  lcd.setCursor(0,1);
  lcd.print("GENERATION");
  delay(3000);

  Serial.begin(9600);
  lcd.clear();
}

void loop()
{
  int sensorValue = analogRead(piezoPin);

  voltage = sensorValue * (5.0 / 1023.0);

  static bool detected = false;

  if(sensorValue > threshold && !detected)
  {
    stepCount++;
    detected = true;
  }

  if(sensorValue < threshold)
  {
    detected = false;
  }

  lcd.setCursor(0,0);
  lcd.print("V:");
  lcd.print(voltage,2);
  lcd.print("V   ");

  lcd.setCursor(0,1);
  lcd.print("Steps:");
  lcd.print(stepCount);
  lcd.print("   ");

  Serial.print("Step detected! Count: ");
  Serial.println(stepCount);
  Serial.print("sensor Value:");
  Serial.print(sensorValue);

  Serial.print("  Voltage:");
  Serial.print(voltage);
  Serial.println(" V");

  delay(1000);
}
