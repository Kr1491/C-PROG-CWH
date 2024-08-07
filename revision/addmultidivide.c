#include <stdio.h>
int num1, num2,out;
int addsum(a,b)
  {
    int c;
    c = a + b;
    return c;
  }

int multi(a,b)
{
  int c;
  c = a*b;
  return c;
}

int div(a,b)
{
  int c;
  c = a/b;
  return c;
}
int main()
{
  int ent;
  printf("WHICH OPERATION?\n1-SUM\n2-MULTIPLY\n3-DIVIDE");
  scanf("%d",&ent);

  switch (ent)
  {
  case 1:
    printf("ENTER FIRST NUMBER: ");
    scanf("%d",&num1);

    printf("ENTER SECOND NUMBER: ");
    scanf("%d",&num2);

    out = addsum(num1,num2);
    printf("OUTPUT>> %d",out);
    break;

  case 2:
    printf("ENTER FIRST NUMBER: ");
    scanf("%d",&num1);

    printf("ENTER SECOND NUMBER: ");
    scanf("%d",&num2);

    out = multi(num1,num2);
    printf("OUTPUT>> %d",out);
    break;


  case 3:
    printf("ENTER FIRST NUMBER: ");
    scanf("%d",&num1);

    printf("ENTER SECOND NUMBER: ");
    scanf("%d",&num2);

    out = div(num1,num2);
    printf("OUTPUT>> %d",out);
    break;
  default:
    break;
  }

  return 0;
}