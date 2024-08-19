#include<stdio.h>

void swap(int *a, int *b){
  int temp;
  temp = *a;
  *a = *b;
  *b = temp;
}

int main()
{
  int a, b;
  printf("First Number is: ");
  scanf("%d",&a);

  printf("Second Number is: ");
  scanf("%d",&b);

  swap(&a,&b);

  printf("Now First Number is: %d and Second Number is: %d",a,b);
  return 0;
}