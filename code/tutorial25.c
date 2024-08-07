//same as lec23prac [just to do revision of arrays]
#include <stdio.h>

int main()
{
  
  int marks[5];


  for (int i = 0; i <= 4; i++)
  {
    printf("Enter Value of (%d)=",i);
    scanf("%d",&marks[i]);
  }

  for (int i = 0; i <=4 ; i++)
  {
    printf("Marks of Roll No (%d): %d\n",i,marks[i]);
  }
  
  
  return 0;
}

