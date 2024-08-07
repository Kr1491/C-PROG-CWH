#include <stdio.h>

int main()
{
  int a;
  int num=1;
  printf("Enter Number: ");
  scanf("%d",&a);

  while (num<=10)
  {
    printf("%d x %d = %d\n",a,num,a*num);
    num++;
  }
  
  return 0;
}
