#include <stdio.h> //fibonnaci series using recursive function

fibonnaci_seq(int n)
  {
    if (n == 1 | n ==2)
    {
      return n;
    }

    return fibonnaci_seq(n-1) + fibonnaci_seq(n-2);
    
  }
int main()
{
  int out;
  printf("Enter Seq>> ");
  scanf("%d",&out);
  for (int i = 1; i <= out; i++)
  {
    printf("%d\n",fibonnaci_seq(out));
    out -= 1;
  
  }
  
  return 0;
}
