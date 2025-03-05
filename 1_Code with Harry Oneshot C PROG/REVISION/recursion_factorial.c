#include<stdio.h>
#include <math.h>

int factorial(int a)
{
  if (a==1 || a==0){
    return 1;
  }
  else{
    return a*factorial(a-1);
  }
}

int main(int argc, char const *argv[])
{
  int a;
  printf("Enter val:");
  scanf("%d",&a);

  printf("Factorial of %d is %d",a,factorial(a));
  return 0;
}
