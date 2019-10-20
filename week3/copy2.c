// Capitalizes a copy of a string using strcpy while checking for errors

#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    // Get a string
    char *s = get_string("s: ");
    if (!s)
    {
        return 1;
    }

    // Allocate memory for another string
    char *t = malloc((strlen(s) + 1) * sizeof(char));
    if (!t)
    {
        return 1;
    }

    // Copy string into memory
    strcpy(t, s);

    // Capitalize first letter in copy
    if (strlen(t) > 0)
    {
        t[0] = toupper(t[0]);
    }

    // Print strings
    printf("s: %s\n", s);
    printf("t: %s\n", t);

    // Free memory
    free(t);
    return 0;
}

//  strcpy(t, s) - "t" -destination, "s" - source

//malloc() has the opposite. Every time you allocate the memory, you should also be freeing that memory. C allows you to ask computer for as much memory as you want, but if you never give it back, computer gets slower and slower and in a worse case scenario it just freezes. The problem is that the program that was written and running on your comp has a MEMORY LEAK