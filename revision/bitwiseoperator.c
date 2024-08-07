#include <stdio.h>      //BITWISE OPERATOR
                        //  & - AND; | - OR;

int main()
{
  printf("2 AND 3: %d\n",2&3);         /*  2>>   1  0
                                           3>>   1  1
                                           2&3>> 1  0 >> 2 answer
                                                                         
                                                                           
                                                                             
                                                                             */
  printf("2 OR 3: %d\n",2|3);
  return 0;
}
