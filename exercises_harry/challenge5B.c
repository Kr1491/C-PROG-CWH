#include <stdio.h>
int first = 0, second = 1, next;
int fibonnaci(int n)
{
  if (n < 1)
  {
    return 0;
  }

  else if (n == 1 || n == 2)
  {
    return 1;
  }

  for (int i = 1; i <= n; i++)
  {
    first = second;
    second = next;
  }

  return next;
}

int main()
{
  int n;
  printf("Enter >> ");
  scanf("%d", &n);
  printf(">>%d", fibonnaci(n));
  return 0;
}
