#include "i2c_m0_local.h"

void dmac_error(void) {
  Serial.println("DMAC ERROR");
}

MyI2C AWire;
