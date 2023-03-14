int leds[] = {5, 6, 7, 8, 9, 10, 11};
int grupo1 = 0;
int tiempo = 30;

void setup() {
  for (grupo1 = 0; grupo1 < 7; grupo1++) {
    pinMode(leds[grupo1], OUTPUT);
  }
}

void loop() {
  for (grupo1 = 0; grupo1 < 7; grupo1++) {
    digitalWrite (leds[grupo1], HIGH);
    delay(300);
    digitalWrite(leds[grupo1 + 0], HIGH);
    delay(300);
    digitalWrite (leds[grupo1], LOW);
    delay(300);
  }
  for (grupo1 = 6; grupo1 >= 0; grupo1--) {
    digitalWrite (leds[grupo1], HIGH);
    delay(300);
    digitalWrite(leds[grupo1 - 0], HIGH);
    delay(300);
    digitalWrite (leds[grupo1], LOW);
    delay(300);
  }

}
