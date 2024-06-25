#include <stdio.h>
#define N 5
//no bound checking in C, if we try to access students[5], it will give a garbage value.
int main(void)
{
  int students[] = {1, 2, 3, 4};

  //printf("Enter the values for the new array: ")
  
  scanf("%d", &students[4]);

  int a;
  for(a=0; a<5; a++){
    printf("Here is the value at %d : %d\n", a, students[a]);
  }
  
  return 0;
}
