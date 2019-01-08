#ifndef __E_COLOR_H_
#define __E_COLOR_H_

enum EColor {
  RED,
  GREEN,
  BLUE,
  YELLOW
};
typedef enum EColor color_e;

static const char* ColorToString(color_e color) {
  switch(color) {
    case RED: return "red"; break;
    case GREEN: return "green"; break;
    case BLUE: return "blue"; break;
    case YELLOW: return "yellow"; break;
    default: return "unknown color"; break;
  }
}


#endif
