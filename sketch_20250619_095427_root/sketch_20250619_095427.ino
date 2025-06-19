const int analogPin = A0; // Analog input pin
const int ledPin = 13;   // LED pin
int analogValue = 0;     // variable to store the value coming from the sensor

void setup() {
  pinMode(ledPin, OUTPUT);      // sets the ledPin to be an output
  Serial.begin(9600);           // initialize serial communication at 9600 bits per second
}

void loop() {
  analogValue = analogRead(analogPin); // read the input on analog pin 0
  float voltage = analogValue * (5.0 / 1023.0); // Convert the analog reading (which goes from 0 - 1023) to a voltage (0 - 5V)

  Serial.print("Voltage: "); 
  Serial.println(voltage); // print out the value you read

  // blink the LED according to the range of the input voltage
  if (voltage >= 0.0 && voltage < 1.0) {
    digitalWrite(ledPin, HIGH);
    delay(500);
    digitalWrite(ledPin, LOW);
    delay(500);
  }
  else if (voltage >= 1.0 && voltage < 2.0) {
    digitalWrite(ledPin, HIGH);
    delay(400);
    digitalWrite(ledPin, LOW);
    delay(400);
  }
  else if (voltage >= 2.0 && voltage < 3.0) {
    digitalWrite(ledPin, HIGH);
    delay(300);
    digitalWrite(ledPin, LOW);
    delay(300);
  }
  else if (voltage >= 3.0 && voltage < 4.0) {
    digitalWrite(ledPin, HIGH);
    delay(200);
    digitalWrite(ledPin, LOW);
    delay(200);
  }
  else if (voltage >= 4.0 && voltage <= 5.0) {
    digitalWrite(ledPin, HIGH);
    delay(100);
    digitalWrite(ledPin, LOW);
    delay(100);
  }
}