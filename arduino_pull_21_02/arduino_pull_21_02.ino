int led = 3; //Porta do LED
//Porta da interrupção:
//O Arduino Uno só aceita as portas 2 e 3
int interruptPort = 2;
//Variáveis modificadas por interrupções devem ser volatile
volatile int state = LOW;
void setup() {
pinMode(led, OUTPUT);
pinMode(interruptPort, INPUT_PULLUP);
attachInterrupt(digitalPinToInterrupt(interruptPort), toggle, LOW);
}
void loop() {
// Qualquer processamento mais longo...
}
void toggle() {
state = !state;
digitalWrite(led, state);
}      


//https://www.tinkercad.com/things/fH9S24S2p9Z-start-simulating/editel?collectionid=OIYJ88OJ3OPN3EA&lessonid=EHD2303J3YPUS5Z&magic=910449b02be416ca5e1bff6826042d964abc829c&projectid=OIYJ88OJ3OPN3EA&t=1582375152492607787&tenant=circuits#/lesson-viewer
