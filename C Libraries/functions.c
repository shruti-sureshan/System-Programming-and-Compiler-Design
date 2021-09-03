#include "functions.h"
#include<stdio.h>
int main(){
    int n = 5;
    sum(n); // `sum_n` contains the result
    printf("Sum till n for %d: %d\n", n, sum_n);

    int f = 6;
    factorial(f); // `fact_n` contains result
    printf("factorial(%d) = %d\n", f, fact_n);

    int num = 36;
    printf("Factors of %d are :\n", num);
    factors(num); // this will print the factors
}