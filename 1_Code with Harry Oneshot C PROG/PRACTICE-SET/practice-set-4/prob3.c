#include<stdio.h>
int main()
{
  int sum = 0;
  for (int i = 1; i <= 10; i++)
  {
    sum = sum + i;
  }
  printf("Sum is %d",sum);
  return 0;
}