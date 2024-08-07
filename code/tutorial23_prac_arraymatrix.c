#include <stdio.h>

int main()
{
  int marks[3][3];

  for (int i = 0; i < 3; i++)
  {
    for (int j = 0; j < 3; j++)
    {
      printf("Enter Array Value for (%d,%d) position",i+1,j+1);
      scanf("%d",&marks[i][j]);
    }
    printf("\n");
  }
  for (int i = 0; i < 3; i++)
  {
    for (int j = 0; j < 3; j++)
    {
      printf("%d ",marks[i][j]);
    }
    printf("\n");
  }
  

  return 0;
}
