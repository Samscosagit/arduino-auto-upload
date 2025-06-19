#define LED_BUILTIN 13   // LED connected to digital pin 13

void setup() {
  pinMode(LED_BUILTIN, OUTPUT);   // sets the pin as output
  Serial.begin(9600);             // start serial communication at 9600bps
}

void loop() {
  for(int i = 0; i < 3; i++) {    // loop 3 times
    digitalWrite(LED_BUILTIN, HIGH);   // sets the LED on
    Serial.println("LED ON");          // print message
    delay(1000);                       // waits for a second
    digitalWrite(LED_BUILTIN, LOW);    // sets the LED off
    Serial.println("LED OFF");         // print message
    delay(1000);                       // waits for a second
  }
  delay(2000);                         // wait for 2 seconds before repeating the sequence
}