#include <stdio.h>

int main()
{
  int num;
  int a =1;
  int out;
  
  printf("Enter Factorial You Want to Calc>> ");
  scanf("%d",&num);
  out = num;
  for (num; num >= 1; --num)
  {
    a = a*num;
  }
  printf("Factorial of %d = %d",out,a);
  
  return 0;
}
