#include <stdio.h>

int main(void) {
    float weight, height, bmi;

    printf("Enter your weight in kilograms: ");
    scanf("%f", &weight);

    printf("Enter your height in meters: ");
    scanf("%f", &height);

    // BMI calculation
    bmi = weight / (height * height);

    printf("Your BMI is = %.2f\n", bmi);

    if (bmi < 18.5){
        printf("You are underweight.\n");
    } else if (bmi > 18.5 && bmi < 24.9){
        printf("You have a normal weight.\n");
    } else if (bmi >= 25 && bmi < 29.9) {
        printf("You are overweight.\n");
    } else {
        printf("You are obese.\n");
    }

    return 0;
}