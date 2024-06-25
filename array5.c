#include <stdio.h>
#define N 5

int main(void)
{
  int arr[] = {1, 2, 3, 4, 5};
  int brr[] = {6, 7, 8, 9, 10};
  int crr[5] = {0};
  int i;

  
  for(i=0; i<5; i++){
    int sum = 0;
    crr[i] = arr[i] + brr[i];
  }

  for(i=0; i<5; i++){
    printf(" %d", crr[i]);
  }
  
  return 0;
}
