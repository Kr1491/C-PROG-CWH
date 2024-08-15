#include<stdio.h>
int main()
{
  int income; float t1 = 0.05; float t2 = 0.2; float t3 = 0.3;

  printf("Enter Income>> ");
  scanf("%d",&income);

  if (income>250000 && income<=500000)
  {
    int tax = income*t1;
    printf("Tax Imposed: %d", tax);

  }

  else if (income>500000 && income<=1000000)
  {
    int tax = income*t2;
    printf("Tax Imposed: %d", tax);
  }
  
  else if (income>1000000)

  {
    int tax = income*t3;
    printf("Tax Imposed: %d", tax);
  }
  
  else{
    printf("Tax Imposed: 0");
  }
  
  



  return 0;
}