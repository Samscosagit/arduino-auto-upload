#include <Arduino.h>

#define LED_PIN 13

void setup() {
  pinMode(LED_PIN, OUTPUT); 
  Serial.begin(9600);
}

void loop() {
  for (int i = 0; i < 10; i++) {
    digitalWrite(LED_PIN, HIGH);   
    Serial.println("LED ON");
    delay(1000);                       
    digitalWrite(LED_PIN, LOW);    
    Serial.println("LED OFF");
    delay(1000);                       
  }
  while(1); // Stop the loop after blinking 10 times
}