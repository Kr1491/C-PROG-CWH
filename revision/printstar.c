#include <stdio.h>

int main()
{
  int i = 1;
  char star;
  printf("%d",i);

  for (i; i < 6; i+2)
  { 
    star = i*'*';
    printf("%c",star);
  }
  return 0;
}
