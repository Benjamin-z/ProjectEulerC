#include <stdio.h>

#define MAX 1000

int main(){
    int i, sum = 0;

    for(i=1; i < MAX; i++){
        if( (i%3 == 0) || (i%5 ==0)){
            sum += i;
        }
        printf("%d: %d\n", i, sum);
    }
    return 0;
}
