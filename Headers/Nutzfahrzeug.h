#ifndef __NUTZFAHRZEUG_H
#define __NUTZFAHRZEUG_H
#include "Auto.h"

class Nutzfahrzeug : public Auto {
private:
  int mMaxLast;
public:
  Nutzfahrzeug(color_e farbe, int maxLast);

  void setMaxLast(int last) { this->mMaxLast = last; }
  int getMaxLast() { return mMaxLast; }

  virtual void print();
};

#endif
