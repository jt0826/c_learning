#include <stdio.h>

int main(void){
    int i;
    float f[4]; //(type)(array name)([array length]) is how an array is declared. the elements of an array should be same type.

    //let's assign the elements of the array
    f[0]=3.14159;
    f[1]=1.41421;
    f[2]=1.61803;
    f[3]=2.71828;

    //iterate through an array

    for(i = 0; i < 4; i++){
        printf("%f\n", f[i]); // %f type specifier for float
    }
}