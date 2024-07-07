#include <stdio.h>

int main(void){
    int i = 10;
    while (i < 10){
        printf ("i is less than 10\n");
    }
    do {
        printf("i is %d\n", i);
    } while(i < 10);
}