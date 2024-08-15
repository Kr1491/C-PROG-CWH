/* Write a function to calculate force of attraction on a body of mass ‘m’ exerted by
earth. Consider g = 9.8m/s2 */
#include<stdio.h>

int force(int mass){
  float force = mass * 9.8;
  return force;
}
int main()
{
  int m;
  printf("Enter Mass: ");
  scanf("%d",&m);

  printf("Force: %dN",force(m));
  return 0;
}

