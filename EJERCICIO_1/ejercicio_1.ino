int let1 = 13;

void setup() {
  Serial.begin(9600);
  pinMode(let1, OUTPUT);
  delay(600);
  
}

void loop() {
  digitalWrite(let1, HIGH);
  delay(600);
  digitalWrite(let1, LOW);
  delay(500);
}
