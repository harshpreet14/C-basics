#include <stdio.h>
#define N 5

/*Initialization of Array
a) AT COMPLILE TIME
- int a[5] = {1, 2, 23, 34 ,2}
- int a[] = {2, 22, 3,2 }
- int a[4] = {1, -2, 1} // the remaining data items initialized with 0 {1, -2, 1, 0}
- int a[5]; //has any garbage values
- int a[5] = {} //error ❌
- char a[5] = {'a', 'b'} remaining intialized with 'NULL' or /0

b) RUN TIME
using a loop to input values from the user
*/
int main(void)
{
  int students[6] = {1, 2, 3, 4, 5, 6,};
  int a; 
  for(a=0; a<6; a++){
    printf("Here is the value at %d : %d\n", a, students[a]);
  }

  int i;
  printf("Enter the values for the new array:");
  for(i =0; i<6; i++){
    scanf("%d" , &students[i]);
  }

  for(a=0; a<6; a++){
    printf("Here is the value at %d : %d\n", a, students[a]);
  }
  return 0;
}
