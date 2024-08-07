#include <stdio.h>

factorial_finding(int n)
  {
    if (n <= 1)
    {
      return 1;  
    }
    
    else{
      return n*factorial_finding(n-1);
    }
  }


int main()
{
  int n;
  printf("Enter N Factorial>> ");
  scanf("%d",&n);

  printf("Factorial of %d is %d",n,factorial_finding(n));
  return 0;
}
