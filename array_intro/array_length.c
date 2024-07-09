#include <stdio.h>

void foo(int x[12]){
    printf("passing array into function, its size is %zu\n", sizeof x);
}

int main(void){
    int x[12]; // array of int called x with length 12
    //C does not actually record the length of the array. Therefore we have to compute it.
    //This is one way of computing it.
    printf("size of array is %zu\n", sizeof x);
    // this gives us the size of the array x in bytes
    printf("size of each element in x is %zu\n", sizeof(int));
    // the size of each element of the array in bytes
    printf("therefore array length is %zu\n", sizeof x / sizeof(int));
    // number of elements = total array size in bytes / size of each element in bytes
    printf("this method does not work if you pass the array into a function\n");
    foo(x);
    printf("this is because the when an array is passed into a function, it is only a pointer to the first element.\n");

}

