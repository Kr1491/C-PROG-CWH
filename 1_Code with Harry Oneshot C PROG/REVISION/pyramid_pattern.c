#include <stdio.h>
int main()
{ 
  int ans;
  printf(">>");
  scanf("%d",&ans);


  for (int i = 1; i <= ans; i++)
  {
    for (int j = 1; j <= i; j++)
    {
      printf("*");
    }
    printf("\n");
  }

  return 0;
}