#ifndef __CABRIO_H
#define __CABRIO_H
#include "Auto.h"

class Cabrio : public Auto {
private:
  bool mOffen;
public:
  Cabrio(color_e farbe, bool offen) : Auto(farbe), mOffen(offen) {};

  // deklaration
  void setOffen(bool);
  bool isOffen();

  void print();
};

#endif
