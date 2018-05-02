#include "movement.h"
#include "sensor.h"
#include "types.h"

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600); //baud rate
}

void loop() {
  // put your main code here, to run repeatedly:
  delay(3000);
  Serial.print("Test\n");
}
