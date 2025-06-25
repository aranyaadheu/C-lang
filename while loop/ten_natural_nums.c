//Sum of first 10 natural numbers
#include <stdio.h>

int main(){
    int i = 1, sum = 0;

    while(i <= 10){
        sum += 1;
        i++;
    }
    printf("Sum = %d\n", sum);
    return 0;
}