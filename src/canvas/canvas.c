#include "include/canvas.h"

canvas * init_canvas(int height, int width) {
  canvas * the_canvas = calloc(1, sizeof(struct CANVAS_T));
  the_canvas->pixels = calloc(height * width, sizeof(struct PIXEL_H *));
  the_canvas->height = height;
  the_canvas->width = width;
  for(int i = 0; i < the_canvas->height; i++)
    for(int j = 0; j < the_canvas->width; j++)
      the_canvas->pixels[i * the_canvas->width + j] = init_color(WHITE, WHITE,
          WHITE);
  return the_canvas;
}

void free_canvas(canvas * the_canvas) {
  if(the_canvas) {
    if(the_canvas->pixels) {
      for(int i = 0; i < the_canvas->height; i++)
        for(int j = 0; j < the_canvas->width; j++)
          if(the_canvas->pixels[i * the_canvas->width + j])
            free_color(the_canvas->pixels[i * the_canvas->width + j]);
      free(the_canvas->pixels);
    }
    free(the_canvas);
  }
}
