#include<stdio.h>
int main()
{
  int i = 10;

  int* j = &i;    // j is a pointer pointing to i
                  // storing the address of i

  printf("The address of i is: %p\n",&i);
  printf("The address of i is: %p ",j);

  return 0;
}