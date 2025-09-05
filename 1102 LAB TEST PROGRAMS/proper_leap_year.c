#include <stdio.h>

int main(){
    int year;
    printf("Enter a year: ");
    scanf("%d", &year);

    if((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0)){
        printf("Leap year\n");
    } else{
        printf("Not a Leap year\n");
    }

    return 0;
}