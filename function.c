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

/*the program doesn't work if the function is not declared before main(), it is not a problem if function is defined after the main() function. 

The declaration tells the compiler about the function's name, return type, and parameters, without providing the actual implementation.
*/

#include<stdio.h>

void sum();

int main(void) {
  printf("Hello, let's learn functions today!\n");
  sum();
  printf("This is the end of the program!");
    
  return 0;
}

void sum(){
  int a, b, sum = 0;

  printf("Enter two numbers : ");
  scanf("%d %d", &a, &b);

  sum = a+b;

  printf("Sum of %d and %d is : %d\n", a, b, sum);
}
