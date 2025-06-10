#include <stdio.h>

int main(void) {
    int x, y, sum;
    x = 50;
    y = 100;
    sum = x+y; 
    printf("Summation result is %d\n", sum);
    printf("Summation of %d and %d is %d\n", x, y, sum);
    printf("%d + %d = %d", x, y, sum);
    return 0;
}