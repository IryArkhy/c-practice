// Prints two strings' addresses

#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // Get two strings
    string s = get_string("s: ");
    string t = get_string("t: ");

    // Print strings' addresses
    printf("s: %p\n", s);
    printf("t: %p\n", t);
}

//%p -for pointer

//Input
//s: Brian
//t: Veronica

//Output
//s: 0x2331010
//t: 0x2331050

//those are hexadecimals. hexa = 16. So base 16 has 16 letters in its alphabet: 0,1,2,3,4,5,6,7,8,9,a,b,c,d,e,f.
//base systems that have to count higher than 10 characters just start using letters of the alphabet by convention