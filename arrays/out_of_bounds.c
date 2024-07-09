#include <stdio.h>

int main(void){
    int i;
    int a[5] = {1, 2, 3, 4, 5};
    for (i = 0; i < 10; i++){
        printf("%d\n",a[i]);
    }
    //note here that we are accessing i[6]...i[9] which was not well-defined in initialisation.
    //it starts printing nonsense after printing 5 as expected.
}