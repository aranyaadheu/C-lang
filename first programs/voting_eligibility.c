#include <stdio.h>

int main(void){
    int age, citizen;

    printf("Enter your age: ");
    scanf("%d", &age);

    if (age >= 18){
        printf("Are you a citizen? (1 for YES 2 for NO): ");
        scanf("%d", &citizen);

        if (citizen == 1){
            printf("You're eligible to vote.\n");
        } else {
            printf("You must be a citizen to vote.\n");
        }
    } else {
        printf("You must be at least 18 years old to vote.\n");
    }

    return 0;
}