#include "include/color.h"

color * init_color(int r, int g, int b) {
  color * the_color = calloc(1, sizeof(struct COLOR_H));
  the_color->r = r;
  the_color->g = g;
  the_color->b = b;
  return the_color;
}

char * debug_color(color * the_color) {
  char * buffer = calloc(MAX_COLOR_SPACES_WIDTH, sizeof(char));
  sprintf(buffer, "%d %d %d", the_color->r, the_color->g, the_color->b);
  return buffer;
}

void free_color(color * the_color) {
  if(the_color)
    free(the_color);
}
