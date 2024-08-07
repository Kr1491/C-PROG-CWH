#include <stdio.h>

int main()
{
  int a;
  printf("Enter No. for MT>> ");
  scanf("%d",&a);

  for (size_t no = 1; no < 11; no++)
  {
    printf("%d x %d = %d\n", a, no, a*no);
  }
  
  return 0;
}
