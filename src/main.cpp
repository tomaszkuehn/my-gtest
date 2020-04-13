#include <iostream>
#include "../inc/checksum.h"

int
main() {
  unsigned long x;
  int cks;

  std::cout << "Starting main" << std::endl;
  x = 4245;
  cks = checksum(x);
  std::cout << "Checksum for " << std::hex << x << " = " << cks << 
    " " << std::dec << cks << std::endl;
}
