// finding divisors of num using for loop
#include <stdio.h>

int main()
{
    int i, n, count = 0;
    printf("Enter a number: ");
    scanf("%d", &n);
    for (i=1; i <= n; i++){
        if(n % i == 0){
            printf("%d\n", i);
            count = count + 1;
            
        } 
    }
    printf("Total count = %d\n", count);
    if (count==2) {
        printf("%d is a prime number", n);
    } if (count != 2) {
        printf("%d is not a prime number", n);
    }

    return 0;
}