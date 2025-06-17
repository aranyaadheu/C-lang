#include <stdio.h>

int main(void)
{
    float marks;
    printf("Enter your marks: ");
    scanf("%f", &marks);

    if (marks >= 80 && marks <=100) {
        printf("Congratulations! You've got an A+\n");
    } else if (marks >=70 && marks < 80) {
        printf("Congratulations! You've got A-");
    } else if (marks >= 60 && marks < 70){
        printf("Congratulations! You've got B");
    } else if (marks >= 50 && marks < 60) {
        printf("Congratulations! You've got C");
    } else {
        printf("You've got Failed!!");
    }

    return 0;
}