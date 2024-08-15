#include<stdio.h>
int main()
{
  int out = 1;
  int num;
  printf("Enter>> ");
  scanf("%d",&num);

  for (int i = 1; i <= num; i++)
  {
    out = i*out;
  }
  
  printf("Factorial of %d = %d",num,out);

  return 0;


}