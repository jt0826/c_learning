#include <stdio.h>

int main(void){
    // "This is a test"
    // things in double quotes are string literals.
    // They are just sequences of characters.
    // Do not confuse them with single quotes which enclose characters

    char *s  = "Hello World";
    // this is how we declare strings. The type is a pointer to a character
    // more specifically it points to the first character of the string, H.
    // we can print it with the %s format specifier

    printf("%s\n", s); // prints Hello World

    // Next, we can use string variables as arrays.
    // We need to give the correct length of the string, if we provide a length

    char s2[11] = "Hello World"; // Hello World has 11 characters including the space.
    // this is the same as 
    char s3 [] = "Hello World"; // Compiler will automatically figure out the length for us.

    //Therefore, we can use array syntax or notation to access elements in the string, like this
    // Since the string is made up of elements which are individual characters
    // We should use the type specifier of %c

    for (int i = 0; i < 11; i++){
        printf("%c\n", s3[i]);
    }
    // one more thing to note is that the program will still work if we change the definition of s:
    
    char *s4 = "Hello World"; // Giving a pointer

    for (int i = 0; i < 11; i++){
        printf("%c\n", s4[i]);
    } // Array accessing still works.
    // This shows that arrays and pointers are fundamentally the same object
}