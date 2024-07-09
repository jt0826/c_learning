#include <stdio.h>
#define COUNT 5 //declaring constant expression

int main(void){
    // let's explore other ways to declare arrays
    // we can set specific elements in the initialiser
    int a[10] = {0, 11, 22, [5]=55, 66, 77};
    // after [5]=55, then it will continue adding values to the next positions in the array
    // let's print out the array
    for(int i = 0; i < 10; i++){
        printf("%d\n", a[i]);
    }
    /*
    0
    11
    22
    0
    0
    55
    66
    77
    0
    0
    we can see that 55 was at index 6, followed by 66 and 77 at index 7 and 8 respectively
    */

   // we can also use constant expressions to initialise arrays
   int b[COUNT] = {[COUNT-3]=3, 2, 1}; // same as int b[5] = {[2]=3, 2, 1}
   //output should be {0,0,3,2,1}
   for(int i = 0; i < 5; i++){
        printf("%d\n", b[i]);
    }

}