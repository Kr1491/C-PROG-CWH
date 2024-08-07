#include <stdio.h>

int main()
{
  int inp;
  int a = 1;
  printf("Enter you want, Multiplication Table of: ");
  scanf("%d",&inp);

  while (a <=10)
  {
    printf("%d x %d = %d\n",inp, a, inp*a);
    a += 1;
  }
  
  
  return 0;
}
