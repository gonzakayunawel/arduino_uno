
// var declaration
int state = LOW;
int button = 2;
int led1 = 3;
int led2 = 4;
int led3 = 5;
int led4 = 6;

void setup() {
  // pin config
  pinMode (button, INPUT);
  pinMode (led1, OUTPUT);
  pinMode (led2, OUTPUT);
  pinMode (led3, OUTPUT);
  pinMode (led4, OUTPUT);

}  
void loop() {
  while(digitalRead(button) == LOW) { // verify button state

  }

  state = digitalRead(led1); // read led1 state
  // turn on leds array
  digitalWrite(led1, !state);
  digitalWrite(led2, !state);
  digitalWrite(led3, !state);
  digitalWrite(led4, !state);

  delay(5000);
  digitalWrite(led1, LOW);
  digitalWrite(led2, LOW);
  digitalWrite(led3, LOW);
  digitalWrite(led4, LOW);
  while(digitalRead(button) == HIGH) {

  }

}
