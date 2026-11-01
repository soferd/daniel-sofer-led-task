#include <Arduino.h>
const int ledred = 25;
const int lednf = 17;
void setup() {
pinMode(ledred,OUTPUT);
pinMode(lednf,OUTPUT);
}

void loop() {

  for (int i = 0; i < 250; i += 25) {
    analogWrite(ledred, i);
    digitalWrite(lednf,HIGH);
    delay(300);
    digitalWrite(lednf,LOW);
    delay(300);
  }
for (int i = 250; i > 0; i -= 25) {
    analogWrite(ledred, i);
    digitalWrite(lednf,HIGH);
    delay(300);
    digitalWrite(lednf,LOW);
    delay(300);
  }

}