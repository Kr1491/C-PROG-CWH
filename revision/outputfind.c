#include <stdio.h>

int main()
{
  int a,count;
  int b = 0;
  printf("Enter END POINT: ");
  scanf("%d",&count);
  for (a = 0; a<= count; a++, b++)
  {
    printf("%d %d\n",a,b);
  }
  
  return 0;
}
