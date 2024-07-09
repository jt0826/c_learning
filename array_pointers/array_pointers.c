#include <stdio.h>

// when we talk about getting a pointer to an array, we mean
// getting a pointer to the first element of the array.

int main(void){
    int a[5] = {11, 22, 33, 44, 55};
    int *p; // p is a pointer to an int

    p = &a[0]; // set p to point to the first element of the array a

    printf("%d\n", *p);
    // printing the first element of the array a, 11

    int *q;
    q = a;
    printf("%d\n", *q); // 11
    //p points to the array, and since no index is specified, it automatically
    //points to the first element of the array
    // take note that we can just directly assign the pointer q to the array a.
    // wait that means that they are the same type, so arrays are just pointers (??)
}