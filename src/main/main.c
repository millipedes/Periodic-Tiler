#include "../file_io/incldue/file_io.h"

int main(void) {
  canvas * the_canvas = init_canvas(600, 800);
  write_canvas_to_file("test.ppm", the_canvas);
  free_canvas(the_canvas);
  return 0;
}
