#include <stdio.h>

int main(void){
    int i = 1;
    //post increment will increase i by 1 after executing
    printf("i is now %d\n", i);
    printf("post incrementing i, i is %d before printing this line \n", i++);
    printf("i is now %d\n", i);
    printf("pre incrementing i, i is %d before printing this line\n", ++i);
    }