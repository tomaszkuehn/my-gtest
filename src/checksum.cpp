#include <iostream>
#include "checksum.h"

uint8_t
checksum(unsigned long val) {
  uint8_t result = 0;

  while(val > 0) {
    result = result ^ (val & (unsigned long)0xFF);
    val = val >> 8;
  }
  
  return result;
}


