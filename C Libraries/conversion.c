#include <stdio.h>
#include "lib_conversions.h"
 
int main(){
    float feet3 = 1;
    printf("cubic feet: %f\n", feet3);
    printf("litres    : %f\n", feet3_to_litre(feet3));

    float celsius = 0;
    printf("celsius : %f\n", celsius);
    printf("fahrenheit: %f\n", celsius_to_fahrenheit(celsius));

    float metre = 1;
    printf("metre : %f\n", metre);
    printf("feet  : %f\n", metre_to_feet(metre));

}