#include "../Headers/Cabrio.h"
#include <iostream>

void Cabrio::setOffen(bool offen) {
  mOffen = offen;
}

bool Cabrio::isOffen() {
  return this->mOffen;
}

void Cabrio::print() {
  std::cout << "Cabrio #" << mId << std::endl;
  std::cout << "Farbe: " << ColorToString(this->getFarbe()) << std::endl;
  std::cout << "Offen: " << mOffen << std::endl;
}
