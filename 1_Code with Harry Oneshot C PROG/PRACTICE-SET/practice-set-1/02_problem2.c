#include<stdio.h>
int main()
{
  int radius;
  int height;
  
  printf("Enter radius (cm): ");
  scanf("%d",&radius);
  
  printf("Enter height (cm): ");
  scanf("%d",&height);
  int vol = 3.14*radius*radius*height;

  printf("Volume of Cylinder: %d",vol);
  return 0;
}