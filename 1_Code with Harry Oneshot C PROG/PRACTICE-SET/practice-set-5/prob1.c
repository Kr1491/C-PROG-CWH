#include<stdio.h>

int avg(int a,int b,int c){
  int out = (a + b + c)/3;
  return out;

}

int main()
{
  int a; int b; int c;

  printf(">>");
  scanf("%d",&a);

  printf(">>");
  scanf("%d",&b);

  printf(">>");
  scanf("%d",&c);

  printf("Average of [%d,%d,%d] = %d",a,b,c,avg(a,b,c));
  return 0;
}