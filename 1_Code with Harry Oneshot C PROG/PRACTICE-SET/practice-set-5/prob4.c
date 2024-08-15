#include<stdio.h>

int sum_of_n(int n){
  if (n == 0 || n == 1)
  {
    return 1;
  }
  
  else{
    return n+sum_of_n(n-1);
  }

}
int main()
{
  int n;
  printf(">> ");
  scanf("%d",&n);

  printf("Sum %d = %d",n,sum_of_n(n));
  return 0;
}