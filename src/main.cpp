#include "display_kingmeter.h"

KINGMETER_t KM;

#define TX0 1
#define RX0 3


void setup() {
  Serial.begin(9600, SERIAL_8N1, RX0, TX0);
  delay(1000);
  KingMeter_Init (&KM, &Serial);

}

void loop() {
  KingMeter_Service(&KM);
}
