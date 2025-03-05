#include <stdio.h>
int main(int argc, char const *argv[])
{
    int distance, time;
    printf("Enter Distance and time: ");
    scanf("%d%d",&distance,&time);
    printf("Speed: %d",distance/time);
    return 0;
}
