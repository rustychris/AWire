#ifndef AWIRE_H
#define AWIRE_H

#ifdef CORE_TEENSY
# include <i2c_t3_local.h>
#elif defined(ARDUINO_SAMD_ZERO)
# include <i2c_m0_local.h>
# define Wire AWire
#else
# include <Wire.h>
#endif

#endif // AWIRE_H
