#include<stdio.h>
                        //Here we cant change the value of a in the
int sum(int a, int b){  // main() program because the 
                        // variable's copy is going inside the function
  a = 7;
  return a+b;
}

int main()
{
  int x = 6, y = 7;
  printf("Sum of 6 + 7 is %d",sum(x,y));
  return 0;
}