int r = 6, g = 5, b= 4;


void setup() {
  
  pinMode(r, OUTPUT); 
  pinMode(g, OUTPUT); 
  pinMode(b, OUTPUT);
}

void colore(unsigned char cr, unsigned char cg, unsigned char cb){
  analogWrite(r,cr);
  analogWrite(g,cg);
  analogWrite(b,cb);
}

void loop() {
  // put your main code here, to run repeatedly:
   colore(255, 0, 0); // lancia la routine colore, con il parametro rosso a 255, il verde a 0
 // ed il blu a 0 (accende il rosso)
 delay(2000); // aspetta 2 secondi prima di accendere il successivo colore
 colore(0,255, 0); // lancia la routine colore ed accende il verde
 delay(2000); // aspetta 2 secondi
 colore(0, 0, 255); // accende il blu
 delay(2000);
 colore(237,109,0); // accende l’arancione (237 di rosso e 109 di verde)
 delay(2000);
 colore(255,215,0); // accende il giallo (255 di rosso e 215 di verde)
 delay(2000);
 colore(0,46,90); // accende l’indaco (46 di verde e 90 di blu)
 delay(2000);
 colore(128,0,128); // accende il viola (128 di rosso e 128 di blu)
 delay(2000);
 colore(0,0,0); // spegne tutto e ricomincia
 delay(2000);
}
