#include <stdio.h>

int main()
{
  int a;
  printf("Enter the end digit: ");
  scanf("%d",&a);
  printf("%d\n",a);

  for (a; a -= 1;)
  {
    printf("%d\n",a);
  }
  
  return 0;
}
