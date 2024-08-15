#include<stdio.h>
int main()
{
  int a; int b; int c; int d;

  printf(">>");
  scanf("%d",&a);

  printf(">>");
  scanf("%d",&b);

  printf(">>");
  scanf("%d",&c);

  printf(">>");
  scanf("%d",&d);


  if (a>b && a>c && a>d)
  {
    printf("a is greater");
  }

  else if (b>a && b>c && b>d)
  {
    printf("b is greater");
  }

  else if (c>b && c>a && c>d)
  {
    printf("c is greater");
  }


  else if (d>b && d>c && d>a)
  {
    printf("d is greater");
  }
  
  return 0;
}