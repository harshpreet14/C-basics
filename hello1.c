#include<stdio.h>
int add(a, b){
  return a+b ;
}

int main(void) {
  int x,y;

  printf("Enter any two numbers: ");
  scanf("%d %d", &x, &y);
  printf("%d\n%d\n%d\n", x, y, add(x+y)); 
  

  
  return 0;
  
}
