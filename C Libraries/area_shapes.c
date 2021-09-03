#include "lib_area_shapes.h"
#include<stdio.h>

int main(void){
    int l = 3, b = 4;
    int r = 10;
    int x = 5;

    printf("Area of rectangle with dimension(%d, %d) = %d\n", l, b, area_rect(l, b));
    printf("Area of circle with r=%d is: %.3f\n", r, area_circle(r));
    printf("Area of square with s=%d is: %d\n", x, area_square(x));
    
    return 0;
}
