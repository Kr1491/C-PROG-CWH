#include<stdio.h>
int main()
{
  int i;
  printf("Enter>> ");
  scanf("%d",&i);

  for (i; i >= 1; i--)
  {
    if (i%2!=0)
    {
      for (int j = 1; j<=i; j++)
      {
        printf("*");
      }
      printf("\n");
    }

    else{
      continue;
    }
    
  }
  
  return 0;
}