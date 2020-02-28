//Pino analógico em que o sensor está conectado
const int sensor = A0;
const int porta = 3;

void setup(){
Serial.begin(9600);
pinMode(porta, OUTPUT);
}
void loop() {
  int val = analogRead(sensor);
  val = map(val, 0, 1023, 255, 0);
  analogWrite(porta, val);
  delay(500);
}
