// Define the LED pin
#define LED_PIN 13

void setup() {
  // Initialize the digital pin as an output.
  pinMode(LED_PIN, OUTPUT);

  // Begin serial communication at 9600 baud.
  Serial.begin(9600);
}

void loop() {
  // Turn the LED on.
  digitalWrite(LED_PIN, HIGH);
  Serial.println("LED is now ON");
  delay(1000); // Wait for 1000 millisecond(s)

  // Turn the LED off.
  digitalWrite(LED_PIN, LOW);
  Serial.println("LED is now OFF");
  delay(1000); // Wait for 1000 millisecond(s)

  // Turn the LED on.
  digitalWrite(LED_PIN, HIGH);
  Serial.println("LED is now ON");
  delay(1000); // Wait for 1000 millisecond(s)

  // Turn the LED off.
  digitalWrite(LED_PIN, LOW);
  Serial.println("LED is now OFF");
  delay(1000); // Wait for 1000 millisecond(s)
}