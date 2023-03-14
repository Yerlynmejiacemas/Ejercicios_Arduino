int leds[] = {2, 3, 4, 5, 6, 7, 8, 9};
int grupo1 = 0;

void setup() {
  Serial.begin(9600);
  for (grupo1 = 0; grupo1 <= 9; grupo1 ++) {
    pinMode (leds[grupo1], OUTPUT);
  }
}
void loop() {
  normal();
  reversa();
  saltos();
  todos_prenden();
  todos_apagan();
  todos_prenden_apagan();
}


void normal() {
  Serial.println("  inicia ciclo normal");
  for (grupo1 = 0; grupo1 <= 8 ; grupo1 ++) {
    digitalWrite (leds[grupo1], HIGH);
    delay (200);
    digitalWrite (leds[grupo1], LOW);
    delay (200);
  }
}
void reversa() {
  Serial.println(" inicia reversa");
  for (grupo1 = 7; grupo1 >= 0; grupo1 --) {
    digitalWrite (leds[grupo1], HIGH);
    delay (200);
    digitalWrite (leds[grupo1], LOW);
    delay (200);
  }
}
void saltos() {
  Serial.println(" inicia salto");
  for ( grupo1 = 0; grupo1 < 8; grupo1 = grupo1 + 2) {
    digitalWrite (leds[grupo1], HIGH);
    delay (500);
    digitalWrite (leds[grupo1], LOW);
    delay (500);
  }
}
void todos_prenden () {
  Serial.println(" todos prenden");
  for (int grupo1  = 0; grupo1 <= 9; grupo1 ++) {
    digitalWrite (leds[grupo1], HIGH);

  }
  delay(500);
}

void todos_apagan () {
  Serial.println(" todos apagan");
  for (int grupo1 = 0; grupo1 <= 9; grupo1++) {
    digitalWrite (leds[grupo1], LOW);
  }
  delay(500);
}

void todos_prenden_apagan() {
  Serial.println( "Todos prenden y apagan");
  for (int grupo1 = 0; grupo1 < 2; grupo1 ++) {
    todos_prenden();
    todos_apagan();
  }

}
