#include <stdio.h>

int main()
{
  int a;
  printf("WELCOME TO THE BURGER PLAZA!!!!");
  printf("0 - BURGER\n1 - PIZZA\n2- RED SOS PASTA\n>>");
  scanf("%d",&a);

  switch (a)
  {
  case 0:
    printf("BURGER ADDED");
    break;

  case 1:
    printf("PIZZA ADDED!");
    break;

  case 2:
    printf("RED SAUCE PASTA ADDED!");
    break;
  
  default:
    printf("ERROR!");
    break;
  }
  return 0;
}
