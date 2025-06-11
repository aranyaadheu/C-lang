#include <stdio.h>

int main(void)
{
    int x = 10, y = 6, rem;
    float div;
    div = (float)x / y;
    rem = x % y;
    printf("div = %.2f, reminder = %d", div, rem);
    return 0;
}