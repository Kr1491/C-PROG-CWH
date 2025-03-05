#include <stdio.h>
int main(int argc, char const *argv[])
{
    float cel;
    printf("Enter Temp. in Celsius: ");
    scanf("%f",&cel);

    float far = (1.8)*cel +32;
    printf("Temperature in Farenheit is %f",far);
    return 0;
}
