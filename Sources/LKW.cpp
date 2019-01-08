#include "../Headers/LKW.h"
#include <iostream>

void LKW::setAnhaenger(int anhaenger) {
  this->mAnhaenger = anhaenger;
}

int LKW::getAnhaenger() {
  return this->mAnhaenger;
}

void LKW::print() {
  std::cout << "LKW #" << mId << std::endl;
  std::cout << "Farbe: " << ColorToString(this->getFarbe()) << std::endl;
  std::cout << "Max Last: " << this->getMaxLast() << std::endl;
  std::cout << "Anhaenger: " << this->mAnhaenger << std::endl;
}
