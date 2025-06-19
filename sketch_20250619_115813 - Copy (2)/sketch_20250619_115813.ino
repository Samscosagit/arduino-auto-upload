// Define LED_BUILTIN if it is not defined by Arduino framework
// #define LED_BUILTIN 13

void setup() {
  // Initialize the digital pin as an output.
  pinMode(LED_BUILTIN, OUTPUT);
  // Initialize serial communication at 9600 bits per second:
  Serial.begin(9600);
}

void loop() {
  for (int i = 0; i < 2; i++) {
    digitalWrite(LED_BUILTIN, HIGH);   // Turn the LED on
    Serial.println("LED ON");         // Print "LED ON" to the serial monitor
    delay(1000);                      // Wait for a second
    digitalWrite(LED_BUILTIN, LOW);    // Turn the LED off
    Serial.println("LED OFF");        // Print "LED OFF" to the serial monitor
    delay(1000);                      // Wait for a second
  }
  delay(2000); // Wait for 2 seconds before the next cycle.
}