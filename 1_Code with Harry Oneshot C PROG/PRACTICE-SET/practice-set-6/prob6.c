#include<stdio.h>
int main()
{
  int i = 5;
  int* j = &i;
  int** k = &j;

  printf("The value of I IS %d",**k);
  return 0;
}