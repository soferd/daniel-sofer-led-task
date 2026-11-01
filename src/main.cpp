#include <Arduino.h>
const int ledred = 39;
const int lednf = 36;
void setup() {
  Serial.begin(115200);
pinmode(ledred,OUTPOT)
pinmode(lednf,OUTPOT)
}

void loop() {

  for (int i = 0; i < 255; i++) {
    analogWrite(ledred, i);
    delay(10);
  }
for (int i = 255; i > 0; i--) {
    analogWrite(ledred, i);
    delay(10);
  }
digitalWrite(lednf,HIGH);
delay(1000);
digitalWrite(lednf,LOW);
delay(1000);
}