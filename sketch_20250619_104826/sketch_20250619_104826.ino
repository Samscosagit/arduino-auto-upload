// Define LED_BUILTIN if it is not defined
#ifndef LED_BUILTIN
#define LED_BUILTIN 13
#endif

void setup() {
  // Initialize the digital pin as an output.
  pinMode(LED_BUILTIN, OUTPUT);
  // Initialize the Serial Monitor
  Serial.begin(9600);
}

void loop() {
  // Blink the LED 12 times
  for (int i = 0; i < 12; i++) {
    digitalWrite(LED_BUILTIN, HIGH);   // Turn the LED on
    Serial.println("LED is on");       // Output message to the Serial Monitor
    delay(1000);                       // Wait for 1 second
    digitalWrite(LED_BUILTIN, LOW);    // Turn the LED off
    Serial.println("LED is off");      // Output message to the Serial Monitor
    delay(1000);                       // Wait for 1 second
  }
  delay(5000);                         // Wait for 5 seconds before repeating the loop
}