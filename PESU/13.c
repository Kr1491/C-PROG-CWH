#include <stdio.h>
#include <math.h>
int main()
{
    int x, y;
    printf("Enter X coordinate, Y coordinate in x,y format: ");
    scanf("%d,%d", &x, &y);
    float dist = sqrt(x * x + y * y);
    printf("Distance travelled from (0,0) is: %.4f", dist);
    int a = pow(3,2);
    printf("")
}