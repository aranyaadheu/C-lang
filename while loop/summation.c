#include <stdio.h>

int main(){
    int i = 1, n, sum = 0;
    printf("Enter a number: ");
    scanf("%d", &n);

    while(i<=n){
        sum = sum + i;
        i++;
    }
    printf("Final Summation is %d\n", sum);

    return 0;
}