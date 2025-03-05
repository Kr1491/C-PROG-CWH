#include <stdio.h>
int main(int argc, char const *argv[])
{
    int cur_year,num;
    printf("Enter Current Year: ");
    scanf("%d",&cur_year);
    printf("No. of Years to Travel Back: ");
    scanf("%d",&num);

    printf("You have travelled back to the year %d",cur_year-num);
    return 0;
}
