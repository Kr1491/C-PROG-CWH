#include <stdio.h>       //factorial using recursions

int factz(int n)
{
  if (n <= 1)
  {
    return 1;
  }

  return n * factz(n-1);
}

int main()
{
  int out, n;
  printf("Enter N: ");
  scanf("%d", &n);
  out = factz(n);

  printf("%d", out);

  return 0;
}
