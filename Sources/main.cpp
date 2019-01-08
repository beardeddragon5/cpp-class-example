#include "../Headers/Cabrio.h"
#include "../Headers/LKW.h"
#include "../Headers/Nutzfahrzeug.h"
#include <iostream>

int main() {
  Auto* autos[5];

  autos[0] = new Cabrio(RED, true);
  autos[1] = new Cabrio(RED, true);
  autos[2] = new LKW(GREEN, 10, 2);
  autos[3] = new Nutzfahrzeug(BLUE, 1);
  autos[4] = new Cabrio(GREEN, true);

  for (int i = 0; i < sizeof(autos)/sizeof(Auto*); i++) {
    autos[i]->print();
    std::cout << std::endl;
    delete autos[i];
    autos[i] = nullptr;
  }
}
