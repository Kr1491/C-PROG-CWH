#include <stdio.h>

int tentimes(int *n)
{
  return *n * 10;
}


int main()
{
  int i;
  printf("Enter>> ");
  scanf("%d", &i);

  printf("Value of ten times of input is %d ", tentimes(&i));
  return 0;
}