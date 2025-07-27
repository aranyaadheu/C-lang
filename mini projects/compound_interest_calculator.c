#include <stdio.h>
#include <math.h>

int main()
{
    // COMPOUND INTEREST CALCULATOR

    double principal = 0.0;
    double rate = 0.0;
    int years = 0;
    int timesCompunded = 0;
    double total = 0.0; 
    double profit = 0.0;

    printf("Compund Interest Calculator\n");

    printf("Enter the principal (P): ");
    scanf("%lf", &principal);

    printf("Enter the interest rate & (r): ");
    scanf("%lf", &rate);
    rate = rate / 100;

    printf("Enter the number of year (t): ");
    scanf("%d", &years);

    printf("Enter # of times compounded per year (n): ");
    scanf("%d", &timesCompunded);

    total = principal * pow(1 + rate/ timesCompunded, timesCompunded*years);
    printf("After %d amount of years, the total will be $%.2lf\n", years, total);
    
    profit = total - principal; 

    printf("Your profit will be $%.2lf", profit);

    return 0;
}