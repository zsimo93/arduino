int r = 6, g = 5, b= 4;
int jx = A5, jy = A4, jbutton = A3;
int x, y, z;

void setup() {
  pinMode(jx, INPUT); 
  pinMode(jy, INPUT); 
  pinMode(jbutton, INPUT);
  
  pinMode(r, OUTPUT); 
  pinMode(g, OUTPUT); 
  pinMode(b, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  x = analogRead(jx);
  y = analogRead(jy);
  z = analogRead(jbutton);

  

  if (z == 0){
    analogWrite(r, 0);
    analogWrite(g, 0);
    analogWrite(b,255);
  }else {
    int red = x/4;
    analogWrite(r, red);
    int green = y/4;
    analogWrite(g, green);
    analogWrite(b,0);
  }
  delay(500);
}
