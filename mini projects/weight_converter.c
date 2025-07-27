#include <stdio.h>

int main()
{
    // WEIGHT CONVERTER PROGRAM
    int choice = 0;
    float pounds = 0.0;
    float kilograms = 0.0;

    printf("===Weight Conversion Calculator===\n");
    printf("\n1. Kilograms to Pounds\n");
    printf("2. Pounds to Kilograms\n");
    printf("Enter your choice (1 or 2): ");
    scanf("%d", &choice);

    if(choice == 1){
        // kilograms to pounds
        printf("Enter the weight in Kilograms: ");
        scanf("%f", &kilograms); 
        pounds = kilograms * 2.20462;
        printf("%.2f kilograms is equal to %.2f pounds\n", kilograms, pounds);
    } else if(choice == 2){
        // pounds to kilograms
        printf("Enter the weight in Pounds: ");
        scanf("%f", &pounds);
        kilograms = pounds / 2.20462;
        printf("%.2f pounds is equal to %.2f kilograms\n", pounds, kilograms);
    } else{
        printf("Invalid Choice! Please Enter 1 or 2");
    }

    return 0;
}