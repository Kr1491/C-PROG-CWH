#include<stdio.h>
int main()
{
  int a;
  printf("Num>> ");
  scanf("%d",&a);

  int index = 1;
  int out = 1;

  while (a >= index)
  {
    out = out*index;
    index = index + 1;
  }
  
  printf("Factorial of %d = %d",a,out);



  return 0;
}