#include "mandelbrot.hpp"


int main(int argc, char* argv[]) {
    
    int32_t width_screen = 1280;
    int32_t height_screen = 720;
    
    if (argc > 2) {
        width_screen  = atol(argv[1]);
        height_screen = atol(argv[2]);
    }
    
    char* path_to_file = "mandelbrot.png";
    if (argc > 3) {
        path_to_file = argv[3];
    }
    
    double x1 = -2, x2 = 1;
    double y1 = -1, y2 = 1;
    if (argc > 7) {
        x1 = atof(argv[4]);
        x2 = atof(argv[5]);
        y1 = atof(argv[6]);
        y2 = atof(argv[7]);
    }
    
    painting(x1, x2, y1, y2, width_screen, height_screen, path_to_file);
    
    return 0;
}
