#include <stdio.h>  #for object file gcc -c new.c

int main()
{
  int a, re;
  int num = 1;
  Printf("Enter number for which factorial you want>> ");
  scanf("%d",&a);
  re = a;

  for (a; a >= 1; a--)
  {
    //printf("%d\n",a);
    num = num*a;
  }
  printf("Factorial of %d = %d", re,num);
  return 0;
}
