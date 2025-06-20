#include <stdio.h>
// all odd nums in 1 to n
int main()
{
    int i, n;
    printf("Enter a number: ");
    scanf("%d", &n);
    for(i = 1; i <= n; i +=2){
        printf("%d\n", i);
    }
    return 0;
}