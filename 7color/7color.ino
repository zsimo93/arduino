int pin = 7;
void setup () {
  // Initialize the digital pin as an output.
  // Pin 13 has an LED connected on most Arduino boards:
  pinMode (pin, OUTPUT);
}
void loop () {
  digitalWrite (pin, HIGH); // set the LED on
  delay (5000); // wait for a second
  //digitalWrite (pin, LOW); // set the LED off
  //delay (2000); // wait for a second
}
