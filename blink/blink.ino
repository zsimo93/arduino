void setup() {
  pinMode(12, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(10, OUTPUT);
}

void loop() {
  digitalWrite(10, LOW);
  digitalWrite(12, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(1000);                       // wait for a second
  digitalWrite(12, LOW);    // turn the LED off by making the voltage LOW
  digitalWrite(11, HIGH);
  delay(1000);
  digitalWrite(11, LOW);    // turn the LED off by making the voltage LOW
  digitalWrite(10, HIGH);
  delay(1000);

}
