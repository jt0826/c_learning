#include <stdio.h>

int main(){
    printf("enter the number of goats you have:\n");
    int goats;
    scanf("%d", &goats);

    //start a switch case with switch(variable){cases}
    switch(goats) {
        case 0:
            printf("you have no goats\n");
            break;
            //break exits the switch case sequence of logic.

        case 1:
            printf("you have one goat\n");
            break;
        
        case 2:
            printf("you have a pair of goats\n");
            break;

        default:
            printf("you have a real plethora of goats\n");
            break;
        //default is what runs when none of the cases listed above fit.
        //take note that switch cases should only accept integers (or chars because they are essentially integers)
    }
}