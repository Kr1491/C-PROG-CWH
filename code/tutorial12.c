#include <stdio.h>  //learned to do multiplaction table using for loop

int main(int argc, char const *argv[])
{ 
  int a;
  printf("MULTIPLICATION TABLE: ");
  scanf("%d", &a);

  for (size_t i = 1; i < 11; i++)
  {
    printf("%d x %d = %d\n", a, i, a*i);
  }
  
  return 0;
}
