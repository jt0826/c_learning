#include <stdio.h>
// we will try defining multidimensional arrays

int main(void){
    int row, col;
    int a[3][3] ={
        {11,12,13},
        {21,22,23},
        {31,32,33}
    };
     //2D matrix, 3 x 3 size
    //lets go down each row and print the values inside each column before
    //going to the next column
    for (row = 0; row < 3; row++){
        for (col = 0; col < 3; col++){
            printf("%d\n", a[row][col]);
        }
    }
    //11, 12, 13, 21, ... ,33

    // we can also use specific indices to explicitly initialise
    // lets make an identity matrix
    int id[3][3] ={
        [0][0] = 1,
        [1][1] = 1,
        [2][2] = 1
};

    for (row = 0; row < 3; row++){
        printf("\n");
        for (col = 0; col < 3; col++){
            printf("%d ", id[row][col]);
        }
    }
}
