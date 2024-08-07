#include<stdio.h>       //for revision 

int main()
{
  int a,b;
  int num = 1;
  printf("Enter number>>");
  scanf("%d",&a);

  for (a; a >= 1; a--)
  {
    num = num*a;
  }

  printf("Factorial>> %d",num);
  
  return 0;
}
