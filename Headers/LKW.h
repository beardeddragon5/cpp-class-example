#ifndef __LKW_H
#define __LKW_H
#include "Nutzfahrzeug.h"

class LKW : public Nutzfahrzeug {
private:
  int mAnhaenger;
public:
  LKW(color_e farbe, int maxLast, int anhaenger) :
    Nutzfahrzeug(farbe, maxLast),
    mAnhaenger(anhaenger) {};

  // deklaration ohne implementation
  void setAnhaenger(int);
  int getAnhaenger();

  virtual void print();
};

#endif
