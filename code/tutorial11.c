#include <stdio.h> //This code is for learning switch statements

int main()
{
  int a, marks;
  printf("Enter a>>");
  scanf("%d", &a);

  printf("Enter Marks>>");
  scanf("%d", &marks);

  switch (a)
  {
  case 2:
    printf("Value of a is 2\n");
    switch (marks)
    {
    case 45:
      printf("Your marks is 45");
      break;
    
    default:
      printf("Your marks is not 45!");
      break;
    }
    break;

  case 3:
    printf("Value of a is 3\n");
    break;

  default:
    printf("Value of a is neither 2 nor 3\n ");
    break;
  }
  return 0;
}



/*
Program? 
*/