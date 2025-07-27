#include <stdio.h>
#include <string.h>

int main(){

    int age = 0;
    float gpa = 0.0f;
    char grade = '\0';
    char name[50] = "";

    printf("Enter your age: ");
    scanf("%d", &age);

    printf("Enter your gpa: ");
    scanf("%f", &gpa);


    printf("Enter your grade: ");
    scanf("  %c", &grade);

    getchar();
    printf("Enter your full name: ");
    fgets(name, sizeof(name), stdin);
    name[strlen(name) - 1] = "\0";

    printf("\n");

    printf("Your are %d years old.\n", age);
    printf("Your grade point is %.2f\n", gpa);
    printf("Your grade letter is %c\n", grade);
    printf("Your name is %s\n", name);

    return 0;
}