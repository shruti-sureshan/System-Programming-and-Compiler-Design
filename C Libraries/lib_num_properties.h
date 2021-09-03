#define fact(x) ({           \
        int p = 1, i=1;      \
        for(i=1; i<=x; i++){ \
            p *= i;          \
        }                    \
        p;                   \
    })

// ({ }) this is mandatory when writing a multiline macro that has a retval.

// Reference:
// https://stackoverflow.com/questions/3532621/using-and-returning-output-in-c-macro/3533300#3533300
// https://gcc.gnu.org/onlinedocs/gcc/Statement-Exprs.html

#define sum_n(n) n * (n + 1) / 2

#define print_factors(n) ({   \
    for(int i=1; i<=n; i++){  \
        if(n%i == 0){         \
            printf("%d ", i); \
        }                     \
    }                         \
})

#define get_factors(n, arr) ({ \
    int j = 0;      \
        printf("%d", n);\
    for(int i=1; i<=n; i++){   \
        if(n%i == 0){          \
            arr[++j] = i;      \
        }                      \
    }                          \
    printf("%d", j);           \
    j+1;                         \
})
