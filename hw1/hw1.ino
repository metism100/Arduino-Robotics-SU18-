int led = 8;
int led2 = 13;
int led3 = 12;

void setup() {
  pinMode(led, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
}

void loop() {
 //red double blink
  digitalWrite(led2, HIGH);
  delay(200);
  digitalWrite(led2, LOW);
  delay(200);
  digitalWrite(led2, HIGH);
  delay(200);
  digitalWrite(led2, LOW);
  delay(200);
 //yellow long blink
  digitalWrite(led, HIGH);
  delay(500);
  digitalWrite(led, LOW);
  delay(500);
 //blue double
  digitalWrite(led3, HIGH);
  delay(200);
  digitalWrite(led3, LOW);
  delay(200);
  digitalWrite(led3, HIGH);
  delay(200);
  digitalWrite(led3, LOW);
  delay(200);
 //yellow long
  digitalWrite(led, HIGH);
  delay(500);
  digitalWrite(led, LOW);
  delay(500);
 //all on
  digitalWrite(led2, HIGH);
  delay(500);
  digitalWrite(led, HIGH);
  delay(500);
  digitalWrite(led3, HIGH);
  delay(500);
  digitalWrite(led, LOW);
  delay(10);
  digitalWrite(led2, LOW);
  delay(10);
  digitalWrite(led3, LOW);
  delay(10);
}
