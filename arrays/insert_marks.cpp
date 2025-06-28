#include <stdio.h>

int main(){
    
    float marks[50];
    int i, n;
    printf("How many elements do you want to add?\n");
    scanf("%d", &n);
    printf("Enter %d values:\n", n);

    for(i= 0; i < n; i++){
        scanf("%f", &marks[i]);
    }

    printf("Your entered values are:\n");

    for(i=0; i<n; i++){
        printf("%.2f\n", marks[i]);
    }

    return 0;
}