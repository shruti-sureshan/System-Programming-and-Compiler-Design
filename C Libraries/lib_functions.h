#define sum(n) \
int sum_n = 0; \
for(int i=1; i<=n; i++){\
    sum_n += i;          \
}

#define factorial(n)\
int fact_n = 1; \
for(int i=1; i<=n;i++){ \
    fact_n *= i;        \
}


#define factors(n)\
for(int i=1;i<=n;i++){\
    if(n%i==0)\
        printf("%d, ", i);\
}
