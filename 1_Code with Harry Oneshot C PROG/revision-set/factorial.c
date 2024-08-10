#include<stdio.h>
int main()
{
  int num = 1;
  int a;
  printf(">>");
  scanf("%d",&a);


  for (a; a >= 1; a--)
  {
    num = num*a;
  }
  
  printf("%d",num);
  return 0;
}