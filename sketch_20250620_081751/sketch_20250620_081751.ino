const int ledPin = 13; // LED connected to digital pin 13

void setup() {
  pinMode(ledPin, OUTPUT); // sets the digital pin as output
  Serial.begin(9600);
}

void loop() {
  digitalWrite(ledPin, HIGH); // turn the LED on
  Serial.println("LED is on");
  delay(1000); // wait for a second
  digitalWrite(ledPin, LOW); // turn the LED off
  Serial.println("LED is off");
  delay(1000); // wait for a second

  while(1); // stop the loop from repeating
}