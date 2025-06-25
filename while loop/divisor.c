// Divisor of a specific number using while loop
#include <stdio.h>

int main(){
    int i = 1, n;
    printf("Enter a number: ");
    scanf("%d", &n);
    printf("The divisors of %d are:\n", n);

    while(i <= n){
        if(n % i == 0){
            printf("%d\n", i);
        }
        i++;
    }

    return 0;
}