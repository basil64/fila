#include <stdio.h>
#include <math.h>

unsigned long factorial(int n) {
    unsigned long value = 1;
    
    for (int i = 1; i <= n; i ++) {
        value *= value * i;
    }
    return value;
}
