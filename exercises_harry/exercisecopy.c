#include <stdio.h>

int main()
{
  int a, num;
  a = 1;
  printf("Enter no. you want to make a table of: ");
  scanf("%d",&num);

  while (a <= 10)
  {
    printf("%d x %d = %d\n", num, a, num*a);
    a += 1;
  }
  
  return 0;
}
