// define the LED pin
const int ledPin = 13;

// the setup function runs once when you press reset or power the board
void setup() {
  // initialize the LED pin as an output.
  pinMode(ledPin, OUTPUT);
  
  // initialize serial communication at 9600 bits per second:
  Serial.begin(9600);
}

// the loop function runs over and over again forever
void loop() {
  digitalWrite(ledPin, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(1000);                       // wait for a second
  digitalWrite(ledPin, LOW);    // turn the LED off by making the voltage LOW
  delay(1000);                       // wait for a second
  
  // print a message to the serial monitor
  Serial.println("LED Blink Once");
  
  // add a delay to prevent rapid blinking
  delay(2000);
}