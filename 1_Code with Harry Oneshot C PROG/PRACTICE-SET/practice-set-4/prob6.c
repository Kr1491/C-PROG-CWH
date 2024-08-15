//To Check Prime Numbers
#include<stdio.h>
int main()
{                           // 2,3,4,5,6,7,8,9 check divisibility 
  int a;
  printf("Enter>> ");
  scanf("%d",&a);

  for (int i = 2; i <= 9; i++)
  {
    if (a%i == 0)
    {
      printf("It is not a prime number!\n");
      break;
    }
    
    else if (a%i != 0)
    {
      printf("It is a prime number!\n");
      break;
    }
    
  }
  
  return 0;
}