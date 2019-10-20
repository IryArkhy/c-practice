// Capitalizes a copy of a string while checking for errors

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
// char *t = malloc((strlen(s) + 1) * sizeof(char));
char *t = malloc(strlen(s) + 1);
if (!t)
{
    return 1;
}

// Copy string into memory
for (int i = 0, n = strlen(s); i <= n; i++)
{
    t[i] = s[i];
}

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

//Description

// "char *t" - "hey, computer, give me a pointer to a    character"
// "hey, computer, give me chunk of memory in which I can store the address of a character"

// malloc() - memory allocates = "give me a chunk of memory". (strlen(s) + 1) * sizeof(char) - answers how many bytes you want to ask. +1 - for 0x0 (\0) character

//sizeof(char) - how many bites is a char. The char is always one bite, so its the same as multiplying by one.

// i <= n and not i < n as usual because we have to take into account the null character which take one more chunk of memory
//Or you can put this option instead (int i = 0, n = strlen(s) + 1; i < n; i++)

//Output

//s: tj
// s: tj
// t: Tj