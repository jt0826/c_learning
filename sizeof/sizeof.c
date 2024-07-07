#include <stdio.h>

int main(){
    int a = 999;
    printf("the size of a is %zu\n", sizeof a);
    printf("the size of 2+7 is %zu\n", sizeof(2+7));
    printf("the size of 3.14159 is %zu\n", sizeof(3.14159));
    long long b = 10;
    printf("the size of long long is %zu\n", sizeof b);
    signed long long c = 1;
    printf("the size of signed long long is %zu\n", sizeof c);
    char d;
    printf("the size of char is %zu\n", sizeof d);
}
