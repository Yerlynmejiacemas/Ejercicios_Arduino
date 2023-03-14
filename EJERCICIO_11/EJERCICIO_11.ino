int pines [] = {6, 7, 8};
int pinA1 = 9;
int a = 0;

void indicador_off() { //Apaga los 3 LEDS
  digitalWrite(pines[a], LOW);

}
void setup() {
  pinMode(pines[a], OUTPUT); // declara LEDs como salidas
  indicador_off(); 
}
void loop() {
  int val;
  val = analogRead(pinA1);  // Esta leyendo el valor de la señal analógica asignada.
  indicador_off(); // apaga los tres LED
                                                        // Si el valor de la señal medida es > 256 enciende LED del PIN8
  if (val >= 256, 512, 768) digitalWrite(pines, HIGH);
                                                         // Si el valor de la señal medida es > 512 enciende LED del PIN7
 
                                                        // Si el valor de la señal medida es > 758 enciende LED del PIN6
  
}
