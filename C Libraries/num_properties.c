#include<stdio.h>
#include "lib_num_properties.h"

int main(void){
    int a = 5, b = 180, c = 750;
    int factors[c], ne;   // ne is number of elements

    // factorial.
    printf("factorial of %d = %d\n", a, fact(a));
    
    // sum of n natural numbers.
    printf("sum of first %d natural numbers is: %d\n", a, sum_n(a));
    
    // factorial of a number: approach1.
    printf("Factors of %d are: ", b);
    print_factors(b);
    
    // factorial of a number: approach2.
    ne = get_factors(c, factors);
    printf("\nFactors of %d are: ", c);
    for(int i=0; i<ne; i++) printf("%d ", factors[i]);
    
    return 0;
}
