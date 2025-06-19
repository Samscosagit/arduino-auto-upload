const int ledPin = 13; // LED connected to digital pin 13

void setup() {
  pinMode(ledPin, OUTPUT); // sets the digital pin as output
  Serial.begin(9600); // opens serial port, sets data rate to 9600 bps
}

void loop() {
  digitalWrite(ledPin, HIGH); // turns the LED on
  Serial.println("LED is on");
  delay(1000); // waits for a second
  digitalWrite(ledPin, LOW); // turns the LED off
  Serial.println("LED is off");
  delay(1000); // waits for a second
}