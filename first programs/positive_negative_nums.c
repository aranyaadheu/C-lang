#include <stdio.h>

int main(void)
{
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);

    if (number > 0) {
        printf("%d is a positive number.\n", number);
    } else if (number < 0) {
        printf("%d is a negative number.\n", number);
    } else {
        printf("The number is ZERO.\n");
    }
    
    return 0;
}