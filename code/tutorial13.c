#include <stdio.h>

int main()
{
  int num, a = 0;
  printf("Enter a number>> ");
  scanf("%d",&num);

  do
  {
    a += 1;
    printf("%d\n",a);

  } while (a < num);

  return 0;
}
