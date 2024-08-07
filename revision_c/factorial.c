#include <stdio.h>


int main(int argc, char const *argv[])
{
  
  int a;
  int num=1;
  int out;
  printf("Enter Number: ");
  scanf("%d",&a);

  for (a; a >= 1; a--)
  {
    out = a*num;
    num = out;
  }
  
  printf("Factorial is: %d",out);


  return 0;
}
