/*
The prime factors of 13195 are 5, 7, 13 and 29.

What is the largest prime factor of the number 600851475143 ?
*/
#include <stdio.h>
#include <math.h>

#define NB 600851475143

int is_prime(unsigned long nb);

int main(){
    unsigned long i;
    unsigned long prime_factor;
    
    for(i=3; i<(int)sqrt((float)NB); i++){
        if(NB%i == 0){
            if(is_prime(i)){
                prime_factor = i;
            }
        }
    }
    printf("%lu\n", prime_factor);
    return 0;
}

int is_prime(unsigned long nb){
    unsigned int i = 2;

    while((nb%i != 0) && (i<(int)sqrt((float)nb))) i++;
    return i==(int)sqrt(nb);
}