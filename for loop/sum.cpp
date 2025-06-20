#include <stdio.h>
// n(n+1)/2
int main()
{
    int i, n = 0;
    for (i = 1; i <= 5; i++){
        n = n + i;
        printf("%d\n", n);
    }
    return 0;
}