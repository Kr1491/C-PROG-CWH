#include <stdio.h>

int main()
{
  int age;
  printf("Enter your age: ");
  scanf("%d",&age);

  if (age>=18)
  {
    printf("You can vote");

  }

  else if (age>10)
  {
    printf("You have age b/w 10 and 18, you can vote for kids");
  }
  

  else{
    printf("You are not eligible for voting");
  }

  return 0;
}
