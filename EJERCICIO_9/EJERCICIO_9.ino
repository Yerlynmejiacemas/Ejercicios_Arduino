// Variable declaración
// Declaración de los pines tipo lista
int pines [] = { 12, 3, 4, 5, 6, 7, 8, 9, 10, 11, };

int control_led = 13; // Led controlador

// Tiempo antes de encender el siguiente LED
int tiempo_siguiente = 100;

// Número de LED-s que permanecen encendidos antes de empezar a apagarlos para
//formar la cola
int longitud = 4;

int leds_size = 11;  // Número de LED-s conectados

void setup() { 
  int a;
 
  pinMode (control_led, OUTPUT);
  for (a = 0; a < leds_size; a++)
  {
    pinMode(pines[a], OUTPUT);
  }
}
void loop() {
  int a;
  // Se establece la longitud de la cola en un contador
  int contador = longitud;

  // Se enciende el LED de control para indicar el inicio del loop
  digitalWrite(control_led, HIGH);
  for (a = 0; a < leds_size; a++)
  {
    digitalWrite(pines[a], HIGH); // Se encienden consecutivamente los LED
    delay(tiempo_siguiente);

    if (contador == 0)
    {
      // Se apagan los LED-s en función de la longitud de la cola.
      digitalWrite(pines[a - longitud], LOW);
    }
   
    else if (contador > 0)
      contador--;
  }
  for (a = (leds_size - tiempo_siguiente); a < leds_size; a++)
  {
    digitalWrite(pines[a], LOW); // Se apagan los LED

        
  }
  delay(tiempo_siguiente);
}
