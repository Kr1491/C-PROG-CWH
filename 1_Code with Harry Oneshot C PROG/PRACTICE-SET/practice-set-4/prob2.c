#include<stdio.h>
int main()
{
  int num;
  printf(">>");
  scanf("%d",&num);

  for (int i = 10; i >= 1; i--)
  {
    printf("%d x %d = %d\n",num,i,num*i);
  }
  
  return 0;
}