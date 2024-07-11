#include <stdio.h>

void print_2D_array(int a[2][3]){
    for (int row = 0; row < 2; row++){ // iterate through the rows
        for (int col = 0; col < 3; col++){ //iterate through the columns
            printf("%d ", a[row][col]); 
        }
        printf("\n"); //create a new line after each row is printed
    }
}

int main(void){
    int x[2][3] = {
        {3,1,4},
        {1,5,9}
    };

    print_2D_array(x);
}