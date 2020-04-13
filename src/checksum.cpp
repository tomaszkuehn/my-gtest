#include <iostream>
#include "checksum.h"

uint8_t
checksum(unsigned long val) {
  uint8_t result = 0;

  std::cout << "Entering checksum" << std::endl;
  while(val > 0) {
    result = result ^ (val & (unsigned long)0xFF);
    std::cout << std::hex << (int)result << std::endl;
    val = val >> 8;
  }
  std::cout << "Leaving checksum" << std::endl;
  return result;
}


