#include <stdio.h>
// 100+99+98+97+.....+1
int main()
{
    int i, n = 0;
    for (i = 100; i >= 1; i--){
        n = n + i;
        printf("%d\n", n);
    }
    return 0;
}