#include <stdio.h>

int main() {
    int i, n, sum = 0;
    printf("Enter a number: ");
    scanf("%d", &n);
    for(i = 5; i <= n; i += 5){
        printf("%d\n", i);
    }

    return 0;
}