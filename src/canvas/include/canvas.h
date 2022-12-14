#ifndef CAN_H
#define CAN_H

#include "color.h"
#include "../../main/include/constants_macros.h"

typedef struct CANVAS_T {
  color ** pixels;
  int height;
  int width;
} canvas;

canvas * init_canvas(int height, int width);
void free_canvas(canvas * the_canvas);

#endif
