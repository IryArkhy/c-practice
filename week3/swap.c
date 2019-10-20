// Swaps two integers using pointers

#include <stdio.h>

void swap(int *a, int *b);

int main(void)
{
    int x = 1;
    int y = 2;

    printf("x is %i, y is %i\n", x, y);
    swap(&x, &y);
    printf("x is %i, y is %i\n", x, y);
}

void swap(int *a, int *b)
{
    int tmp = *a; // star is a "derefference operator" - go to that address and get the value of "a"
    *a = *b;
    *b = tmp;
}

//swap(&x, &y) - we print an ampersant because the function expects 2 addresses

