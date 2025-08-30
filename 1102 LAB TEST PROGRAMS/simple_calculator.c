#include <stdio.h>

int main()
{
    int x, y, sum, sub, multiply;
    float div;
    printf("Enter two numbers: ");
    scanf("%d %d", &x, &y);
    sum = x + y;
    sub = x - y;
    multiply = x * y;
    div = (float)x / y; // at least one value should be float. It could be either x or y. 

    printf("%d + %d = %d\n", x, y, sum);
    printf("%d - %d = %d\n", x, y, sub);
    printf("%d * %d = %d\n", x, y, multiply);
    printf("%d / %d = %.2f\n", x, y, div);
  
    return 0;  
}