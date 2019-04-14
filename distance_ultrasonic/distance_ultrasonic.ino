#include <hcsr04.h>

HCSR04 ultrasonic(12,13);

int led = 8;

void setup() {
  Serial.begin(9600);
  pinMode (led, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  int dist = ultrasonic.distanceInMillimeters() / 10;

  Serial.println(dist);

  if(dist < 5){
    digitalWrite(led, HIGH);
  } else {
    digitalWrite(led, LOW);
  }
}
