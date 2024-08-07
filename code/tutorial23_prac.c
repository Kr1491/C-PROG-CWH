#include <stdio.h>

int main()
{
  int marks[4];

  for (int i = 0; i < 4; i++)
  { 
    printf("Enter value for array index %d: ",i);
    scanf("%d",&marks[i]);

  }

  for (int i; i < 4; i++)
  {
    printf("Value of %d index: %d\n",i,marks[i]);
  }
  
  
  return 0;
}
