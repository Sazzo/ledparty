int led1 = 10;
int led2 = 11;
int led3 = 12;
int led4 = 13;
int led5 = 9;
int led6 = 8;
int led7 = 7;
int led8 = 6;
int led9 = 5;
int led10 = 4;
int button = 2;

int buttonState = 0;

void setup() {
  // put your setup code here, to run once:
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
  pinMode(led4, OUTPUT);
  pinMode(led5, OUTPUT);
  pinMode(led6, OUTPUT);
  pinMode(led7, OUTPUT);
  pinMode(led8, OUTPUT);
  pinMode(led9, OUTPUT);
  pinMode(led10, OUTPUT);

  /*
  pinMode(button, INPUT);

  buttonState = digitalRead(button);

  if(buttonState == HIGH) {
    startAnimation();
  }
  */
}

void startAnimation() {
  delay(10);
  digitalWrite(led1, LOW);
  delay(25);
  digitalWrite(led2, HIGH);
  delay(25);
  digitalWrite(led3, HIGH);
  delay(25);
  digitalWrite(led4, HIGH);
  delay(25);
  digitalWrite(led5, HIGH);
  delay(25);
  digitalWrite(led6, HIGH);
  delay(25);
  digitalWrite(led7, HIGH);
  delay(25);
  digitalWrite(led8, HIGH);
  delay(25);
  digitalWrite(led9, HIGH);
  delay(10);
  digitalWrite(led10, HIGH);
  delay(10);
  digitalWrite(led10, LOW);
  delay(25);
  digitalWrite(led9, LOW);
  delay(25);
  digitalWrite(led8, LOW);
  delay(25);
  digitalWrite(led7, LOW);
  delay(25);
  digitalWrite(led6, LOW);
  delay(25);
  digitalWrite(led5, LOW);
  delay(25);
  digitalWrite(led4, LOW);
  delay(25);
  digitalWrite(led3, LOW);
  delay(25);
  digitalWrite(led2, LOW);
  delay(10);
  digitalWrite(led1, HIGH);
}

void loop() {
  startAnimation();
}
