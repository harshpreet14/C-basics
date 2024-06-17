#include<stdio.h>

void swap(int* x, int* y);

int main(void) {
  int x = 5, y = 7;
  printf("The old values of x and y are : %d, %d\n", x, y);
  swap(&x, &y);
  printf("The new values of x and y are : %d, %d\n", x, y);
  return 0;
}

void swap(int* x, int* y){
  *x = 7;
  *y = 5;
  printf("The swapped values of x: %d and y: %d is\n", *x, *y);
}
