int leds1 = 9;
int potenciometro = A1;
int luz = 0;
int led_intensidad = 0;

void setup() {
  Serial.begin(9600);
  pinMode(leds1, OUTPUT);
}

void cambio_valores () {
  Serial.print("CONTEO DE LUZ...");
  Serial.println(luz);


}

void loop() {
  luz = analogRead(potenciometro);
  cambio_valores();
  led_intensidad = (luz * 255) / 1024;


  analogWrite(leds1, led_intensidad);

}
