#include  <stdio.h>
/*Changed the SCIENCE/MATHS PROJECT
"Instead of using If/Else Statements, we now use switch/case statements"*/

int main()
{
  int val;
  printf("Enter the Numbers Below if you passed in these subjects\n 1 - Science Passed\n2 - Maths Passed\n3 - Both Maths and Science Passed\n>>");
  scanf("%d", &val);
 



  switch (val)
  {
  case 1:
    printf("---------------------------------------------------------\n CONGRATS YOU HAVE BEEN PASSED IN SCIENCE EXAM!\n YOU GOT RUPEES 15/- AS A REWARD!\n---------------------------------------------------------");
    break;

  case 2:
    printf("---------------------------------------------------------\n CONGRATS YOU HAVE BEEN PASSED IN MATHEMATICS EXAM!\n YOU GOT RUPEES 15/- AS A REWARD!\n---------------------------------------------------------");
    break;

  case 3:
    printf("---------------------------------------------------------\n CONGRATS YOU HAVE BEEN PASSED IN BOTH MATHEMATICS AND SCIENCE EXAM!\n YOU GOT RUPEES 45/- AS A REWARD!\n---------------------------------------------------------");
    break;
  

  
  default:
    printf("UNKOWN COMMAND");
    break;
  }
  return 0;
}
