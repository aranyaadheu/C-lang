// all even numbers in 1 to n range
#include <stdio.h>

int main()
{
    int i, n;
    printf("Enter a number: ");
    scanf("%d", &n);
    for (i = 2; i <= n; i += 2){
        printf("%d\n", i);
    }
    return 0;    
}