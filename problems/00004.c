/*
A palindromic number reads the same both ways. The largest palindrome made from the product of two 2-digit numbers is 9009 = 91 × 99.

Find the largest palindrome made from the product of two 3-digit numbers.
*/
#include <stdio.h>
#include <string.h>

#define TEST 9009

// return the lenght on an int
int lenght_int(unsigned int nb);

// test if a number is a palindrome
// 1 if true
// 0 if false
int is_palindrome(unsigned int nb);

int main(){
    printf("%u\n", is_palindrome(TEST));
    return 0;
}

// Thx https://stackoverflow.com/a/3069580
int length_int(unsigned int nb){
    // max is 6 digit (999*999 = 998001)
    if (nb >= 100000) return 6;
    if (nb >= 10000) return 5;
    if (nb >= 1000) return 4;
    if (nb >= 100) return 3;
    if (nb >= 10) return 2;
    return 1;
}

int is_palindrome(unsigned int nb){
    unsigned char nb_digits = length_int(nb);
    char str[nb_digits];
    unsigned char i = 0;

    sprintf(str, "%u", nb);
    while(str[i] == str[nb_digits-i-1] && i<nb_digits/2) i++;

    return i == nb_digits/2;
}