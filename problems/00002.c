#include <stdio.h>

#define MAX 4000000

int main(){
    unsigned long a = 1;
    unsigned long b = 2;
    unsigned long fib = 0;
    // sum initialized because the first 3 values (1, 1, 2) are fixed
    unsigned long sum = 2;
    unsigned char i = 4;

    while(a+b < MAX){
        fib = a + b;
        a = b;
        b = fib;
        // if result is even
        if(fib%2 == 0){
            sum += fib;
        }
        printf("%d: value:%lu / sum:%lu\n",i, fib, sum);
        i++;
    }
    printf("\nRESULT: %lu\n", sum); 
    return 0;
}
