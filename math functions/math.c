#include <stdio.h>
#include <math.h>

/*
Floor Function (⌊x⌋):

The floor function rounds a number down to the nearest integer.
For example, ⌊3.7⌋ = 3, and ⌊-2.3⌋ = -3.
If x is already an integer, then ⌊x⌋ = x.

Ceiling Function (⌈x⌉):

The ceiling function rounds a number up to the nearest integer.
For example, ⌈3.2⌋ = 4, and ⌈-2.7⌋ = -2.
If x is already an integer, then ⌈x⌉ = x. 
*/

int main()
{
    float x = 45;

    //int x = 2;
    //x = sqrt(x);
    //x = pow(x, 4);
    //float x = 3.99;
    //x = round(x);
    //x = ceil(x);
    //x = floor(x);
    
    //x = abs(x);
    //x = log(x);
    //x = sin(x);
    //x = cos(x);
    
    x = tan(x);
    printf("%f", x);

    return 0;
}