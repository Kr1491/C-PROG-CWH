#include <stdio.h>

int main()
{
  char passed;
  printf("Which Exams did you passed?\nM- Only Maths Passed\nS - Only Science Passed\nMS - Both maths and science passed\n>>");
  scanf("%c",&passed);

 
  if (passed == 'M')  
  {
    printf("Congratulations for passing on Maths Subject!\n You got 15/- as your prize!");
  }

  else if (passed == 'S')  
  {
    printf("Congratulations for passing on Science Subject!\n You got 15/- as your prize!");
  }

  else if (passed == 'B')  
  {
    printf("Congratulations for passing on both Maths and Science Subject!\n You got 45/- as your prize!");
  }

  else{
    printf('Invalid Statement!');
  }
   
  return 0;
}
