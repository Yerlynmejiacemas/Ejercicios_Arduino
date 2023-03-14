int Rojo1 = 3;

int Amarillo1 = 4;

int Verde1 = 5;

int Rojo2 = 6;

int Amarillo2 = 2;

int Verde2 = 8;

int tiempo1 = 6000;

int tiempo2 = 2000;


void setup()

{

  pinMode(Rojo1, OUTPUT);
  delay(2000);
  pinMode(Amarillo1, OUTPUT);

  pinMode(Verde1, OUTPUT);

  pinMode(Rojo2, OUTPUT);

  pinMode(Amarillo2, OUTPUT);

  pinMode(Verde2, OUTPUT);

}


void loop()

{

  digitalWrite(Rojo1, HIGH);

  digitalWrite(Amarillo1, LOW);

  digitalWrite(Verde1, LOW);

  digitalWrite(Rojo2, LOW);

  digitalWrite(Amarillo2, LOW);

  digitalWrite(Verde2, HIGH);

  delay(tiempo1);

  digitalWrite(Rojo1, HIGH);

  digitalWrite(Amarillo1, LOW);

  digitalWrite(Verde1, LOW);

  digitalWrite(Rojo2, LOW);

  digitalWrite(Amarillo2, HIGH);

  digitalWrite(Verde2, LOW);

  delay(tiempo2);

  digitalWrite(Rojo1, LOW);

  digitalWrite(Amarillo1, LOW);

  digitalWrite(Verde1, HIGH);

  digitalWrite(Rojo2, HIGH);

  digitalWrite(Amarillo2, LOW);

  digitalWrite(Verde2, LOW);

  delay(tiempo1);

  digitalWrite(Rojo1, LOW);

  digitalWrite(Amarillo1, HIGH);

  digitalWrite(Verde1, LOW);

  digitalWrite(Rojo2, HIGH);

  digitalWrite(Amarillo2, LOW);

  digitalWrite(Verde2, LOW);

  delay(tiempo2);

}
