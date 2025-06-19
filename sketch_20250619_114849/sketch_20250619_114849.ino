// LED connected to digital pin 13
int ledPin = 13;
int blinkCount = 5;

void setup() {
  // Initialize the digital pin as an output.
  pinMode(ledPin, OUTPUT);
  // Initialize the serial communication at 9600 baud rate
  Serial.begin(9600);
}

void loop() {
  for(int i = 0; i < blinkCount; i++){
    digitalWrite(ledPin, HIGH); // turn the LED on by making the voltage HIGH
    Serial.println("LED ON");
    delay(1000); // wait for a second
    digitalWrite(ledPin, LOW); // turn the LED off by making the voltage LOW
    Serial.println("LED OFF");
    delay(1000); // wait for a second
  }
  while(1); // stop executing any further code
}