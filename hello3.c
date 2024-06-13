#include<stdio.h>


int main(void) {
  int x = 10, y = 12, z = 20;

  int a = (x<y) && (y<z);

  printf("%d", a);
  
  return 0;
}
