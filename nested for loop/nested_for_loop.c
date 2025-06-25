#include <stdio.h>

int main(){
    int i, j;
    for(i = 0; i<5; i++){
        for(j = 5; j>0; j--){
            printf("i = %d, j = %d\n", i, j);
            if(i == j){
                break; // when i == j, inner loop breaks.  
            }
        }
        printf("\n");
    }
    return 0;
}