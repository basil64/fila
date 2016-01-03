#include <stdio.h>
#include <stdlib.h>

int fibonacci(int n) {
   int fib = 0;
   int f1, f2;
   if (n == 0) {
      fib = 0;
   } else if (n == 1) {
      fib = 1;
   } else {
     int i = 0;
     f1 = 1;
     f2 = 0;
     for (i = 2; i <= n; i ++) {
        fib = f1 + f2;
	f2 = f1;
	f1 = fib;
     }
   }
   return fib;
}

int main(int argc, char** argv) {
   if (argc != 2) {
      printf("Wrong number of parameters! Should be 1 is %d\n", argc - 1);
      return -1;
   }
   int n;
   sscanf(argv[1], "%d", &n);
   int fib = fibonacci(n); 
   printf("Fibonnaci for n = %d is %d\n", n, fib);
}
