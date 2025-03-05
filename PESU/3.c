#include <stdio.h>

int main(){
    int inp,num = 123;
    printf("Enter Secret Number: ");
    scanf("%d",&inp);

    if (inp == num)
    {
        printf("Door has opened!");
    }
    else{
        printf("Wrong Password, Door has not opened");
    }
    
}