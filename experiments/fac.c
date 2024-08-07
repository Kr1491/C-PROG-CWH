#include <stdio.h>

int main()
{
  int a;
  int num = 1;
  printf("Enter Num: ");
  scanf("%d",&a);

  for (int i = 1; i <= a; i++)
  {
    num = num*i;
  }
  printf("Factorial of %d is %d",a,num);
  
  return 0;
}
