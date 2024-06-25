#include <stdio.h>
#define N 5
/*collection of homogenous data items which are stored in contiguous memory locations. */

//Datatype Name_of_Array[size_of_array];

int main(void)
{
  int students[5]; //if initialized without declaring any of the values, then the array contains garbage values.
  int b;
  float marks[] = {24.5, 78};
  float mark[b];
  printf("Hi");
  int student[N];
  return 0;
}

//int students[]; gives error: needs and explicit size, so you will need to type the array. Line 11

//int a[2+2] ✔️
//int b[10/2] ✔️
// float mark[b = 11 / 2] does not work because C does not support initializing a variable within the array declaration. ❌
