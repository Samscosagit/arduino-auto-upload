#define LED_PIN 13
#define ANALOG_INPUT A0

void setup() {
  pinMode(LED_PIN, OUTPUT);
  pinMode(ANALOG_INPUT, INPUT);
  Serial.begin(9600);
}

void loop() {
  int analogValue = analogRead(ANALOG_INPUT);
  float voltage = analogValue * (5.0 / 1023.0); // Convert the analog reading (which goes from 0 - 1023) to a voltage (0 - 5V)
  
  Serial.print("Analog value = ");
  Serial.print(analogValue);
  Serial.print("\t Voltage = ");
  Serial.println(voltage);
  
  if(voltage >= 0 && voltage < 1) {
    digitalWrite(LED_PIN, HIGH);
    delay(500);
    digitalWrite(LED_PIN, LOW);
    delay(500);
  } else if(voltage >= 1 && voltage < 2) {
    digitalWrite(LED_PIN, HIGH);
    delay(400);
    digitalWrite(LED_PIN, LOW);
    delay(400);
  } else if(voltage >= 2 && voltage < 3) {
    digitalWrite(LED_PIN, HIGH);
    delay(300);
    digitalWrite(LED_PIN, LOW);
    delay(300);
  } else if(voltage >= 3 && voltage < 4) {
    digitalWrite(LED_PIN, HIGH);
    delay(200);
    digitalWrite(LED_PIN, LOW);
    delay(200);
  } else if(voltage >= 4 && voltage <= 5) {
    digitalWrite(LED_PIN, HIGH);
    delay(100);
    digitalWrite(LED_PIN, LOW);
    delay(100);
  }
}