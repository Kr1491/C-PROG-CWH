#include<stdio.h>

int sum(int* a, int* b)
{
  *b = 8;
  return *a+*b;
}

int main()
{
  int x = 7, y = 6;
  printf("Sum of 7 + 8 is: %d",sum(&x,&y));
  return 0;
}