#include <Arduino.h>

#define LED_PIN 13

void setup() {
  pinMode(LED_PIN, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  int randomTime = random(1000, 5000); // generate a random time between 1 and 5 seconds
  digitalWrite(LED_PIN, HIGH);
  Serial.println("LED ON");
  delay(randomTime);

  digitalWrite(LED_PIN, LOW);
  Serial.println("LED OFF");
  delay(randomTime);
}