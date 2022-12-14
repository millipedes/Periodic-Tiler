#ifndef COL_H
#define COL_H

#include <stdio.h>
#include <stdlib.h>

#define MAX_COLOR_SPACES_WIDTH 13

typedef struct COLOR_H {
  int r;
  int g;
  int b;
} color;

color * init_color(int r, int g, int b);
char * debug_color(color * the_color);
void free_color(color * the_color);

#endif
