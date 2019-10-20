// Incorrectly gets a string from user using scanf

#include <stdio.h>

int main(void)
{
    // char *s; (1)
    char *s = NULL; // (2)
    printf("s: ");
    scanf("%s", s);
    printf("s: %s\n", s);
}

//you dont need an & (ampersant) near s in scanf("%s", s) - because char *s is already a pointer the the adress in the memory

//If you run a program like that (with  char *s;) you'll get an error that says "variable s is uninitialized"

//If you run a program (2), youll get the output:
//s : tj
//s : (null)

//size of a pointer is 64 bits or 8 bytes. 9 bits is one byte

// char *s = NULL; - it means we written down to this variable 64 zeros. And when you get a string using scanf(), you tell the computer : "Hey, go to that adress and store a string there". It's just not enough room to type in the string