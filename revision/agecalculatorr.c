#include <stdio.h> //age calculator difficulty: v easy
agecalc(){
  int year, age;
  printf("<<<<<<<<<<<WELCOME TO AGE CALCULATOR!>>>>>>>>>>>>>\n");
  printf("What is your Birth Year?:\n");
  scanf("%d",&year);
  age = 2024 - year;
  return age;
}

int main()
{ 
  int c;
  c = agecalc();
  printf("Your age is %d",c);

  return 0;
}
