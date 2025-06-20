// pin for the LED
int ledPin = 13;

void setup() {
  // initialize serial communication
  Serial.begin(9600);
  
  // set the LED pin as output
  pinMode(ledPin, OUTPUT);
}

void loop() {
  // turn the LED on
  digitalWrite(ledPin, HIGH);
  Serial.println("LED on");
  delay(1000); // wait for a second
  
  // turn the LED off
  digitalWrite(ledPin, LOW);
  Serial.println("LED off");
  delay(1000); // wait for a second
  
  // turn the LED on
  digitalWrite(ledPin, HIGH);
  Serial.println("LED on");
  delay(1000); // wait for a second
  
  // turn the LED off
  digitalWrite(ledPin, LOW);
  Serial.println("LED off");
  delay(1000); // wait for a second
}