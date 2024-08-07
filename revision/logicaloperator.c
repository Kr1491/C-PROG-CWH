#include <stdio.h>

int main()   //LOGICAL OPERATORS &&-AND; || - OR;
{
  printf("AND OPERATOR B/W TWO NON ZERO'S: %d\n",2&&3);  //two non zero's will result into 1 (due to AND operator)
  printf("AND OPERATOR B/W one ZERO and one NON-ZERO: %d",2&&0); //one ZERO and one NON-ZERO will result into 0 (AND)
  return 0;
}
