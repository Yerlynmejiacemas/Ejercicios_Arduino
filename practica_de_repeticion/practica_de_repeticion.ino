//3 leds el primero 6 veces, el segundo 5 veces y el 3ro 4,
//en el segundo ciclo el primero 5, el segundo 4 y el tercero 3
//Declaracion de las variables
int leds[] = {6, 7, 8};
int led1 = 6;
int led2 = 7;
int led3 = 8;

void setup() {
  Serial.begin(9600);
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
}


void loop() {
  encendidos();
  repeticion();
  repeticion2();
  repeticion3();
  fijo();


}

void encendidos () {
  Serial.println("primer ciclo");
  for (int a = 0; a < 6; a++) {
    digitalWrite(led1, HIGH);
    delay(400);
    digitalWrite(led1, LOW);
    delay(400);
  }
  for (int a = 0; a < 5; a++) {
    digitalWrite(led2, HIGH);
    delay(400);
    digitalWrite(led2, LOW);
    delay(400);
  }
  for (int a = 0; a < 4; a++) {
    digitalWrite(led3, HIGH);
    delay(400);
    digitalWrite(led3, LOW);
    delay(400);
  }
}

void repeticion () {

  Serial.println("segundo_ciclo");
  for (int a = 0; a < 5; a++) {
    digitalWrite(led1, HIGH);
    delay(400);
    digitalWrite(led1, LOW);
    delay(400);
  }


  for (int a = 0; a < 4; a++) {
    digitalWrite(led2, HIGH);
    delay(400);
    digitalWrite(led2, LOW);
    delay(400);
  }
  for (int a = 0; a < 3; a++) {
    digitalWrite(led3, HIGH);
    delay(400);
    digitalWrite(led3, LOW);
    delay(400);
  }

}
void repeticion2 () {

  Serial.println("tercer_ciclo");
  for (int a = 0; a < 4; a++) {
    digitalWrite(led1, HIGH);
    delay(400);
    digitalWrite(led1, LOW);
    delay(400);
  }


  for (int a = 0; a < 3; a++) {
    digitalWrite(led2, HIGH);
    delay(400);
    digitalWrite(led2, LOW);
    delay(400);
  }
  for (int a = 0; a < 2; a++) {
    digitalWrite(led3, HIGH);
    delay(400);
    digitalWrite(led3, LOW);
    delay(400);
  }

}
void repeticion3 () {

  Serial.println("cuarto_ciclo");
  for (int a = 0; a < 3; a++) {
    digitalWrite(led1, HIGH);
    delay(400);
    digitalWrite(led1, LOW);
    delay(400);
  }


  for (int a = 0; a < 2; a++) {
    digitalWrite(led2, HIGH);
    delay(400);
    digitalWrite(led2, LOW);
    delay(400);
  }
  for (int a = 0; a < 1; a++) {
    digitalWrite(led3, HIGH);
    delay(400);
    digitalWrite(led3, LOW);
    delay(400);
  }

}
void fijo () {

  Serial.println("fijoo");
  for (int a = 0; a < 8; a++) {
    digitalWrite(leds[a], HIGH);



  }
  delay(5000);
}
