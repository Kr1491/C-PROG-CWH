#include <stdio.h>
                                    //MADE FACTORIAL PROJECT ON MY OWN HAHAHAH
int main()
{
  int a;
  int num = 1;
  printf(">>");
  scanf("%d",&a);
  for (a; a >= 1; a--)
  {
    printf("%d\n",a);
    num = num*a;
  }
  printf("%d",num);
  
  return 0;
}
