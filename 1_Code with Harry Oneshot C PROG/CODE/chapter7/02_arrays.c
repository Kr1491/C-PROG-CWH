#include<stdio.h>
int main()
{
  //make a program to input array values and print them
  int a;
  printf("Enter>> ");
  scanf("%d",&a);
  int marks[a];

  for (int i = 0; i < a; i++)
  {
    int inp;
    printf(">>");
    scanf("%d",&inp);
    marks[i] = inp;
  }

  printf("--------------PRINTING VALUES--------------------\n");

  for (int l = 0; l < a; l++)
  {
    printf("%d\n",marks[l]);
  }
  
  
  return 0;
}

  


