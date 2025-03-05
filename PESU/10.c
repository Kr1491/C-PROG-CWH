#include <stdio.h>
int main(int argc, char const *argv[])
{
    int amount;
    printf("Enter Gold Amount: ");
    scanf("%d",&amount);
    float interest = amount *0.05;
    printf("Tax Charged: %f",interest);
}
