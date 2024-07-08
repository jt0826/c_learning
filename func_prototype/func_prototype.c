//you can call functions before they are defined by using function prototypes.
// let's say we want to make a function foo and define it after it has been called in main.
#include <stdio.h>
// we need to make the function prototype here
int foo(void);
//prototype declares the function name as well as the arguments (void in this case, foo takes in no arguments, then put semi colon
//let's say we want foo to return 3490
int main(void){
    int i = foo();
    printf("%d\n", i);
}
// we can then define the function below
int foo(void){
    return 3490;
}