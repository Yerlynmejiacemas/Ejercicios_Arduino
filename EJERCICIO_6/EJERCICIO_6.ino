//Declaracion de led
int leds[] = {5, 6, 7, 8};

//declaracion del boton
int pin_boton = 4;
int g = 0;

void setup() {
  Serial.begin(9600);
  //Definicion de salidas y entradas
  pinMode (leds[g], OUTPUT);
  pinMode(pin_boton, INPUT);
}
void loop() {
  if (digitalRead(pin_boton) == LOW) {
    encendido();
  }
}
void encendido() {
  for (g = 0; g <= 4; g ++) {
    digitalWrite(leds[g], HIGH);
    delay(200);
    digitalWrite(leds[g], LOW);
    delay(200);
  }
}
