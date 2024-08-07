#include <stdio.h>
//printing a rhombus pattern:)
int main()
{
  int num;
  printf("Enter Rows: ");
  scanf("%d",&num);

  for (int i = 1; i <= num; i++)
  { 
    for (int j = 1; j < i; j++)
    {
      printf(" ");
    }

    for (int j = 1; j < num; j++)
    {
      printf("*");
    }

    printf("\n");
    
    

  }
  
  return 0;
}
