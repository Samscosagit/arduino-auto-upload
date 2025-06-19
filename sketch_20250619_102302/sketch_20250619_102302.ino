// Define the LED pin
#define LED_BUILTIN 13

void setup()
{
  // Initialize the built-in LED pin as output
  pinMode(LED_BUILTIN, OUTPUT);
  // Start the serial communication
  Serial.begin(9600);
}

void loop()
{
  // Turn the LED on
  digitalWrite(LED_BUILTIN, HIGH);
  // Output to serial monitor
  Serial.println("LED is ON");
  // Wait for a second
  delay(1000);
  // Turn the LED off
  digitalWrite(LED_BUILTIN, LOW);
  // Output to serial monitor
  Serial.println("LED is OFF");
  // Wait for a second
  delay(1000);
  
  // Second Blink
  // Turn the LED on
  digitalWrite(LED_BUILTIN, HIGH);
  // Output to serial monitor
  Serial.println("LED is ON");
  // Wait for a second
  delay(1000);
  // Turn the LED off
  digitalWrite(LED_BUILTIN, LOW);
  // Output to serial monitor
  Serial.println("LED is OFF");
  // Wait for a second
  delay(1000);
}