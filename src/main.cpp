#include <Arduino.h>
const int ledred = 39;

void setup() {
  Serial.begin(115200);
pinmode(ledred,OUTPOT)
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

}