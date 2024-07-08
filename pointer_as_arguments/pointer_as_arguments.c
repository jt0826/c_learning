#include <stdio.h>

//pointers start to be more useful when you pass them as arguments to a function.
//the function copies all the parameters it takes in.
//hence, when a pointer is passed as a parameter, it gets copied by the function as well.

//we will use increment function as an example.
//note that the increment function returns void. however, we can allow it to dereference its copy of a pointer.

//here's the increment function that returns void, and takes in a pointer to an int:
//it dereferences its copy of the pointer, then adds 1 to the thing that p points to.
void increment(int *p){
    *p = *p + 1;
}

int main(void){
    //so, let us make p point to an int i which holds a value of 10.
    int i = 10;
    int *j = &i; //setting j to be the pointer which holds the address of i
    printf("i is %d\ndereferenced j is %d\n", i, *j);
    //now we will call increment and pass j in as a parameter
    increment(j);
    printf("i is now %d\n", i); //should print 11
    //the function has modified a variable in another scope using pointers!!
    //if you want functions to modify variables directly, you can pass a pointer to the variables as parameters.

}
