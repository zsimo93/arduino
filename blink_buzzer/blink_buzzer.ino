int buzzerpin = 7;
int red = 12;
int yellow = 11;
int green = 10;
int fre;//set the variable to store the frequence value

void setup() {
  pinMode(buzzerpin, OUTPUT);
  pinMode(red, OUTPUT);
  pinMode(yellow, OUTPUT);
  pinMode(green, OUTPUT);
}

void loop() {
  digitalWrite(green, LOW);
  digitalWrite(red, HIGH);   // turn the LED on (HIGH is the voltage level)
  tone(buzzerpin, 200);
  delay(500);                       // wait for a second
  digitalWrite(red, LOW);    // turn the LED off by making the voltage LOW
  digitalWrite(yellow, HIGH);
  tone(buzzerpin, 400);
  delay(500);
  digitalWrite(yellow, LOW);    // turn the LED off by making the voltage LOW
  digitalWrite(green, HIGH);
  tone(buzzerpin, 600);
  delay(500);
}


