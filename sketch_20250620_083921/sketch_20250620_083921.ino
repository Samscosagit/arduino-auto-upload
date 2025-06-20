#define LED_PIN 13          // Define the LED pin
#define ANALOG_INPUT_PIN A0 // Define the analog input pin
#define VOLTAGE_MAX 5.0     // Maximum voltage that the analog pin can read
#define ANALOG_READ_MAX 1023 // Maximum value the analogRead can return

void setup() {
  pinMode(LED_PIN, OUTPUT); // Set the LED pin to OUTPUT mode
  Serial.begin(9600); // Initialize the Serial communication
}

void loop() {
  int analog_value = analogRead(ANALOG_INPUT_PIN); // Read the analog value
  float voltage = (float)analog_value / ANALOG_READ_MAX * VOLTAGE_MAX; // Convert the analog value to voltage

  Serial.print("Analog value: ");
  Serial.print(analog_value);
  Serial.print(" Voltage: ");
  Serial.println(voltage);

  if (voltage >= 0 && voltage < 1) {
    digitalWrite(LED_PIN, HIGH); // Turn the LED on
    delay(200); // Wait for 200ms
    digitalWrite(LED_PIN, LOW); // Turn the LED off
    delay(200); // Wait for 200ms
  } else if (voltage >= 1 && voltage < 2) {
    digitalWrite(LED_PIN, HIGH); // Turn the LED on
    delay(150); // Wait for 150ms
    digitalWrite(LED_PIN, LOW); // Turn the LED off
    delay(150); // Wait for 150ms
  } else if (voltage >= 2 && voltage < 3) {
    digitalWrite(LED_PIN, HIGH); // Turn the LED on
    delay(100); // Wait for 100ms
    digitalWrite(LED_PIN, LOW); // Turn the LED off
    delay(100); // Wait for 100ms
  } else if (voltage >= 3 && voltage < 4) {
    digitalWrite(LED_PIN, HIGH); // Turn the LED on
    delay(50); // Wait for 50ms
    digitalWrite(LED_PIN, LOW); // Turn the LED off
    delay(50); // Wait for 50ms
  } else if (voltage >= 4) {
    digitalWrite(LED_PIN, HIGH); // Turn the LED on
  }
}