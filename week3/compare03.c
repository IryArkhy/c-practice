#include <stdio.h>
#include <string.h>
#include <stdbool.h>
// #include <cs50.h>



int main(void) {
  char *s = get_string("s: ");

  if (!s) return 1;
  
  char *t = get_string("t: ");
  if (!t) return 2;


  if (strcmp(s,t)==0) {
    printf("Same\n");
  } else {
     printf("Different\n");
  }
  return 0;
}