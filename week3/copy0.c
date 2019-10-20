// Capitalizes a string

   #include <cs50.h>
   #include <ctype.h>
   #include <stdio.h>
   #include <string.h> 
   
   int main(void) {
  // Get a string
  string s = get_string("s: ");

  // Copy string's address
  string t = s;

  // Capitalize first letter in string
 if (strlen(t) > 0)
  {
  t[0] = toupper(t[0]);
  }

  // Print string twice
 printf("s: %s\n", s);
 printf("t: %s\n", t);
 }

 //Otput 

 //> s: veronica

 //> s: Veronica
 // > t: Veronica

 // Because variable "s", as well as "t", points to the chunk of memory where the first letter of veronica's name is stored. They point ro the same chunk of memory