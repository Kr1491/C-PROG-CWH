#include <stdio.h>

int main()
{
  int a;
  printf("Enter Number: ");
  scanf("%d",&a);

  if (a%2==0)
  {
    printf("%d is even number", a);
  }

  else if (a%2!=0)
  {
    printf("%d is odd number", a);
  }

  else{
    printf("Invalid Statement");
  }

  return 0;
}
