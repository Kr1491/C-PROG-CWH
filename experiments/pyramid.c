#include<stdio.h>
int main()
{
  int star;
  printf("Ent>>");
  scanf("%d",&star);
  int i = 1;
  for (star; star >= i; star--)
  {
    for (int j = 1; j <= star; j++)
    {
      printf("*");
    }
    printf("\n");
  }
  
  return 0;
}