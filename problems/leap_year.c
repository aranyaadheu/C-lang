// leap year toph.co problem
/*
In the Gregorian calendar, certain years have 366 days instead of 365. 
In such years, the month of February is extended to have 29 days (instead of 28 days). 
These years are known as leap years.

A leap year occurs when the year is a multiple of 4 but not a multiple of 400.

Given a year, determine if the year is a leap year.
*/
#include <stdio.h>

int main(void){
    int year;
    printf("Enter a year: ");
    scanf("%d", &year);
    if(year % 4 ==0 && year % 400 != 0){
        printf("Yes");
    } else{
        printf("No");
    }
    return 0;
}