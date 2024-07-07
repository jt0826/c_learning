
#include <stdio.h>

int main(){
    int x, y;
    printf("enter a number x:\n");
    scanf("%d", &x);
    printf("you have entered x = %d\n", x );
    printf("enter a number y:\n");
    scanf("%d", &y);
    // and is &&
    if (x > 10 && y < 20){
        printf("x is more than 10 and y is less than 20\n");
    }

    // or is ||
    if (x == 5 || y == 5){
        printf("either x is 5 or y is 5\n");
    }

    // not is !
    if (!(x < 3)){
        printf("x is not less than 3\n");
    }

    printf("end of program\n");

}