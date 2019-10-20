// Gets an int from user using scanf = the same as get_int

#include <stdio.h>

int main(void)
{
    int x;
    printf("x: ");
    scanf("%i", &x);
    printf("x: %i\n", x);
}
//scanf () -scanned formated text
// &x - get me the address of "x"