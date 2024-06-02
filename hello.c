#include <stdio.h>

int main()
{
  printf("Hello World\n");
  printf("Hi\n");

  int x = 12;

  int y = x/2;

  printf("The value of y is: %i\nThe value of x is: %i\n", y, x);

  printf("%i\n %i\n %i", y, x, y);
  
  return 0;
}
//the format string helps determine what will be printed, when the program encounters first %i, it starts to look for arguments in order, then second %i, it prints the third argument, and so on.

//space insensitive language
