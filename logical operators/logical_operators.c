#include <stdio.h>
#include <stdbool.h>

int main(){
    int temp = 1000000;
    // using AND logical operator you can check more than one condition. 
    
    /*
    
    if(temp > 0 && temp <30){
        printf("The temperature is GOOD.\n");
    } else{
        printf("The temperature is BAD.\n");
    }
    
    */

    /*
    
    if(temp <= 0 || temp >= 30){
        printf("The temperature is BAD\n");
    } else{
        printf("The temperature is GOOD\n");
    }
    
    */

    bool isSunny = false;

    if(!isSunny){
        printf("It is SUNNY outside\n");
    } else{
        printf("It is CLOUDY outside\n");
    }
    

    return 0;
}