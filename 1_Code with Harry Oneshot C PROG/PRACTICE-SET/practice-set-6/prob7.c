#include<stdio.h>

int tentimes_cbv(int n){
  n = n*10;
  return n;
}
int main()
{
  int a;
  printf("Enter Value: ");
  scanf("%d",&a);

  tentimes_cbv(a);

  printf("%d",a);
  
  return 0;
}