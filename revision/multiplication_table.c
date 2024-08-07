#include <stdio.h>

int main()
{
  int a, no;
  no = 1;
  printf("Enter Number for Multiplication Table: ");
  scanf("%d",&a);

  while (no <= 10)
  {
    printf("%d x %d = %d\n", a,no,a*no);
    no += 1;
  }
  
  return 0;
}
