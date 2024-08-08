#include<stdio.h>
int main()
{
  int side1; int side2;
  printf("Enter length (cm): ");  
  scanf("%d",&side1);
  printf("Enter breadth (cm): ");
  scanf("%d",&side2);

  printf("Area of rectangle: %dcm sq.",side1*side2);

  return 0;
}