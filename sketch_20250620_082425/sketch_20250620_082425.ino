#include <Arduino.h>

const int ledPin = LED_BUILTIN;
const int analogPin = A0;

void setup() {
  pinMode(ledPin, OUTPUT);
  pinMode(analogPin, INPUT);
  Serial.begin(9600);
}

void loop() {
  int analogValue = analogRead(analogPin);
  float voltage = (analogValue / 1023.0) * 5.0;
  Serial.print("Voltage: ");
  Serial.println(voltage);
  
  if (voltage >= 0 && voltage < 1) {
    digitalWrite(ledPin, HIGH);
    delay(400);
    digitalWrite(ledPin, LOW);
    delay(400);
  } 
  else if (voltage >= 1 && voltage < 2) {
    digitalWrite(ledPin, HIGH);
    delay(300);
    digitalWrite(ledPin, LOW);
    delay(300);
  } 
  else if (voltage >= 2 && voltage < 3) {
    digitalWrite(ledPin, HIGH);
    delay(200);
    digitalWrite(ledPin, LOW);
    delay(200);
  } 
  else if (voltage >= 3 && voltage < 4) {
    digitalWrite(ledPin, HIGH);
    delay(100);
    digitalWrite(ledPin, LOW);
    delay(100);
  } 
  else if (voltage >= 4) {
    digitalWrite(ledPin, HIGH);
  }
}