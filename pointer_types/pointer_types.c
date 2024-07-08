#include <stdio.h>

int main(void){
    int i;
    int *p; // this is how we declare pointers. p points to an int, and it is declared by
            // having a * in front of the name p. however, p is uninitialised and now points to nothing.
    p = &i;
    // we assign the memory address of i to p. p now points to the int i.
    // we can use the original value of i through the pointer p.
    
    // now we modify the value of i in place to make it equal to 10.
    i = 10;
    // i is now 10
    // we can change the value of i through the pointer p
    // we will use *p to dereference the pointer p, meaning that it will now retrieve the data
    // that the pointer p points to (i.e. i)
    *p = 20;
    // the thing that p points to, which is i, is now assigned 20
    printf("i is %d\n", i);
    printf("dereferenced p is %d\n", *p);
    // to conclude, when dereferencing a pointer with *, we are saying to use the object that it points to instead
    // of using the pointer itself.
    // in other words, *p is just another name for i now.
    
}