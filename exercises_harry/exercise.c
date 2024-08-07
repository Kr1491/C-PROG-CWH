#include <stdio.h>
/*
Print a multiplaction of a number entered by the user in pretty form

Example: 
Enter the the no. you want multiplication
table of: 

Input: 
>>6

Output:
Table of 6:
6 x 1 = 6
...
6 x 10 = 60

*/


int main()
{
  int no, a;
  a = 1;
  printf(">>");
  scanf("%d",&no);

  while (a <= 10)
  {
    printf("%d x %d = %d\n",no, a, no*a );
    a += 1;
  }
  

  return 0;
}
