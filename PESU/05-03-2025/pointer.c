//Pointers   (IMPORTANT)
/*
A pointer is a variable that stores the memory address of another variable
*/
/*General Syntax of A Pointer*/
#include <stdio.h>
int main(int argc, char const *argv[])
{
    int a = 10;
    int *ptr = &a;
    printf("%d\n",a);
    printf("%d\n",&a);
    printf("%d\n",ptr);
    printf("%d",*ptr);
    return 0;
}


