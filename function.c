#include<stdio.h>

void sum(){
  int a, b, sum = 0;

  printf("Enter two numbers : ");
  scanf("%d %d", &a, &b);

  sum = a+b;

  printf("Sum of %d and %d is : %d\n", a, b, sum);
}

int main(void) {
  printf("Hello, let's learn functions today!\n");
  sum();

  sum();

  sum();

  printf("This is the end of the program!")
    
  return 0;
}
