#include <stdio.h>


int factorial(int num)
{
  if (num <=1)
  {
    return num;
  }

  else
  {
    return num*factorial(num-1);
  }
}

int main()
{
  int no;
  printf("Enter Factorial>> ");
  scanf("%d",&no);

  printf("Factorial of %d = %d",no,factorial(no));
  return 0;
}
