#ifndef __AUTO_H_
#define __AUTO_H_
#include "EColor.h"

/**
 * Abstrakte Klasse.
 * Diese Eigenschaften sind in jedem Auto enthalten.
 * Dazu zählen:
 *  - Cabrio
 *  - Nutzfahrzeuge
 *    - LKW
 */
class Auto {
protected:
  int mId;
private:
  // Jedes Auto hat eine Farbe
  color_e mFarbe;

public:
  Auto(color_e farbe): mFarbe(farbe) {
    static int count = 1;
    mId = count++;
  }

  // deklaration und implementierung einer methode
  void setFarbe(color_e farbe) {
    this->mFarbe = farbe;
  }

  color_e getFarbe() {
    return mFarbe;
  }

  // Jedes Auto kann seine Eigenschaften ausgeben
  virtual void print() = 0;
  virtual ~Auto() {}
};

#endif
