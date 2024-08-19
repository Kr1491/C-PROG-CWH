#include<stdio.h>

void func1(int n){
  printf("The address of i is: %p\n",&n);
}


int main()
{
  int i = 7;
  printf("The address of i is: %p\n",&i);
  func1(i);
  return 0;
}

//The addresses are different because the exact variable is not
// going inside the function, but on the contrary the variable's
// copy is gone inside the function