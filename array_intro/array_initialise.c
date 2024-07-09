#include <stdio.h>

int main(void){
    int i;
    // we can initialise all the elements of an array at once
    //we do this by initialising the array and assigning it the value of the elements in curly braces
    // like {a, b, c, d, ...}
    int a[5] = {22, 37, 3490, 18, 95}; // initialise with these 5 values
    for (i = 0; i < 5; i++){
        printf("%d\n", a[i]);
    }
    // iterate through the elements of the array and print each element
    // note that you cannot have more elements in the initialise statement than the length of the array
    // if you have fewer items than the length of the array, the remaining elements will be initialised to 0.
    
    //let's initialise an array with a length of 3 but only provide 1 value
    int b[3] = {1};
    int j;
    for (int j = 0; j < 3; j++){
        printf("%d\n", b[j]);
    // the values which are not provided get initialised to 0
    }
}