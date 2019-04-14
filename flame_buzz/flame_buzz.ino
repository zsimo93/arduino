int flame = A5;
int speakerPin = 8;
int sensor = 0;

void setup() {
  // put your setup code here, to run once:
  pinMode(flame, INPUT);
  pinMode(speakerPin, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  sensor = analogRead(flame);
  Serial.println(sensor);

  
  
  tone(speakerPin, sensor);
  /*
  delay(500);
  tone(speakerPin, 500);
  delay(1000);
*/
  
}
