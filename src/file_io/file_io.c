#include "incldue/file_io.h"

void write_canvas_to_file(char * file_name, canvas * the_canvas) {
  FILE * fp = fopen(file_name, "w");
  char * buffer = NULL;
  fprintf(fp, "P3\n%d %d\n%d\n", the_canvas->width, the_canvas->height, WHITE);
  for(int i = 0; i < the_canvas->height; i++)
    for(int j = 0; j < the_canvas->width; j++) {
      buffer = debug_color(the_canvas->pixels[i * the_canvas->width + j]);
      fprintf(fp, "%s\n", buffer);
      free(buffer);
    }
}
