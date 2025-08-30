#include <stdio.h>

int main()
{
    int x, y, sum;
    printf("Enter two numbers: ");
    scanf("%d %d", &x, &y);
    sum = x + y;
    printf("Summation of %d and %d is %d\n", x, y, sum);

    return 0;
}