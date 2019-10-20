// Fails to swap two integers

#include <stdio.h>

void swap(int a, int b);
int main(void)
{
    int x = 1;
    int y = 2;

    printf("x is %i, y is %i\n", x, y);
    swap(x, y);
    printf("x is %i, y is %i\n", x, y);
}

void swap(int a, int b)
{
    int tmp = a;
    //when you run a debuger, you will see that value of a =1, value of b =2, value of tmp = 324455. Value of tmp is a GARBAGE VALUE. So, when you declare variables they usually are not empty, they have garbage values.
    a = b;
    b = tmp;
}

//Otput x is 1, y is 2. Doesn't work.
//Why? Yes, you're passing x and y and calling them a and b. But a and b seem to be the copies of x and y. You are successfully swaping a and b, but it has nothing to do with original   x and y, they remain untouched. In C when you pass an arguments to the functions, you are passing the copies of that arguments. To make a solution, we would have to pass to the function the addresses of those  values. See "swap.c"