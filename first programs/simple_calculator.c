#include <stdio.h>

int main(void)
{
    // simple calculator
    int x, y, sum, sub, mult;
    float div;
    printf("Enter two numbers: ");
    scanf("%d %d", &x, &y);
    sum = x + y;
    sub = x - y;
    mult = x * y;
    div = (float)x / y; // at leat one value should be float

    printf("%d + %d = %d\n", x, y, sum);
    printf("%d - %d = %d\n", x, y, sub);
    printf("%d * %d = %d\n", x, y, mult);
    printf("%d / %d = %.2f\n", x, y, div);
    return 0;
}