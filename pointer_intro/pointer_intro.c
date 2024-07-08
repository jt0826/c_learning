#include <stdio.h>
int main(void){
    int i = 10;
    printf("the value of i is %d\n", i);
    // & gives the memory address of variables
    printf("and its address is %p\n", (void *)&i);
    //in C there are different pointer types. in general, type * refers to a pointer to that specific kind of variable.
    // for example, int * means a pointer to an integer, while char * means a pointer to a char.
    // therefore, void * is a pointer that can point to any data type.
    // More specifically, the %p format specifier requires the argument passed to %p to be a void * to ensure compatibility.
    // &i is a pointer to an integer. Therefore (void *)&i converts the pointer which points only to an integer
    // to a pointer which can point to any data type, which is needed for %p to accept.
}