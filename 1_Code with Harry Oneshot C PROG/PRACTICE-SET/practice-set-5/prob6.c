#include <stdio.h>
int main()
{
  int a;
  printf("Enter>>: ");
  scanf("%d", &a);

  for (int i = 1; i <= a; i++)
  {
    if (i % 2 != 0)
    {
      for (int j = 1; j <= i; j++)
      {
        printf("*");
      }
      printf("\n");
    }

    else
    {
      continue;
    }
  }

  return 0;
}