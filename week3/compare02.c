#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <cs50.h>




int main(void) {
  char *s = get_string("s: ");
  //We write this checking to avoid an error called "segmentation fault = segfault": you've toched memory you should not have/ or something went wrong and you didn't detect it
  if (s == NULL) return 1;
  
  char *t = get_string("s: ");
  if (t == NULL) return 2;

//checking if strcmp() return value is equal to zero 
//strcmp() does not return true/false. It returns zero if the strings are equal and positiv value if s is supposed to go before t, negative - if s is supposed to go after t alphabetically (ASCII).
  if (strcmp(s,t)==0) {
    printf("Same\n");
  } else {
     printf("Different\n");
  }
  return 0;
}

