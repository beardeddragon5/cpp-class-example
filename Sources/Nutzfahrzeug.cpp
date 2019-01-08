#include "../Headers/Nutzfahrzeug.h"
#include <iostream>

Nutzfahrzeug::Nutzfahrzeug(color_e farbe, int maxLast) : Auto(farbe) {
  this->mMaxLast = maxLast;
}

void Nutzfahrzeug::print() {
  std::cout << "Nutzfahrzeug #" << mId << std::endl;
  std::cout << "Farbe: " << ColorToString(this->getFarbe()) << std::endl;
  std::cout << "Max Last: " << this->mMaxLast << std::endl;
}
