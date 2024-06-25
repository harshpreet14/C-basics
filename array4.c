#include <stdio.h>
#define N 5

int main(void)
{
  int marks[] = {67, 56, 89, 90, 93}, i, even = 0, odd=0;
  
  for(i=0; i<5; i++){
    if(marks[i] % 2==0){
      even++;
    }else{
      odd ++;
    }
  }

  printf("EVEN: %d\n", even);
  printf("ODD %d", odd);
  
  return 0;
}
