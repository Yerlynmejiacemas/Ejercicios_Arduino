int let1 = 5;
int let2 = 6;
int let3 = 7;
int let4 = 8;


void setup() {
  Serial.begin (9600);
  pinMode(let1, OUTPUT);
  pinMode(let2, OUTPUT);
  pinMode(let3, OUTPUT);
  pinMode(let4, OUTPUT);
}

void loop() {
  Serial.println("Empezamos el ciclo");
  digitalWrite (let1, HIGH);
  delay(500);
  digitalWrite (let1, LOW);
  digitalWrite (let2, LOW);
  digitalWrite (let3, LOW);
  digitalWrite (let4, LOW);
  delay(100);
  digitalWrite (let2, HIGH);
  delay(500);
  digitalWrite (let2, LOW);
  digitalWrite (let1, LOW);
  digitalWrite (let3, LOW);
  digitalWrite (let4, LOW);
  delay(100);
  digitalWrite (let3, HIGH);
  delay(500);
  digitalWrite (let3, LOW);
  digitalWrite (let1, LOW);
  digitalWrite (let2, LOW);
  digitalWrite (let4, LOW);
  delay(100);
  digitalWrite (let4, HIGH);
  delay(500);
  digitalWrite (let4, LOW);
  digitalWrite (let1, LOW);
  digitalWrite (let2, LOW);
  digitalWrite (let3, LOW);
  delay(100);

}
