#include <stdio.h>

int main(void){
    //y is 17 if x > 10, if not y is 37
    //x is first 0
    int x = 0;
    int y = x > 10? 17: 37;
    printf("when x is %d, then y is %d\n", x, y);
    x = 11;
    printf("setting x to %d now\n", x);
    y = x > 10? 17: 37;
    printf("when x is %d, then y is %d\n", x, y);

    printf("we will now determine if a number is odd or even\nenter a number:\n");
    int a;
    scanf("%d", &a);
    printf("the number %d is %s\n", a, a % 2 == 0? "even": "odd");
}