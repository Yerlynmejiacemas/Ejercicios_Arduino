// declaracion de leds
int leds[] = {5, 6, 7, 8, 9};
int tiempo = 200;
int zumbador = 10;
int pulsador = 11;

void setup () {
  for (int n = 0; n < 5; n++) {
    pinMode(leds[n], OUTPUT);
  }
  pinMode(zumbador, OUTPUT);
  pinMode(pulsador, INPUT);
}

void secuencia(int n) {
  if (digitalRead(pulsador) == HIGH && n == 2) {
    digitalWrite(zumbador, HIGH);
    delay (1000);
    digitalWrite(zumbador, LOW);
    tiempo = tiempo - 20;
    if (tiempo < 10) {
      tiempo = 200;
    }
  }
}

void loop () {
  for (int n = 0; n < 5; n++) {
    digitalWrite(leds[n], HIGH);
    delay(tiempo);
    secuencia(n);
    digitalWrite(leds[n], LOW);
    delay(tiempo);
  }
}
