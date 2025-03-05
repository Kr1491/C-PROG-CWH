/*Pointer and Array*/
/*
int arr[3][3] = {{1,2,3},{4,5,6},{7,8,9}}
*/
#include <stdio.h>
int main(){
    int arr[3] = {12,2,4};
    int *ptr = &arr;
    printf("%d\n",ptr);
    printf("%d\n",*(ptr+1));
    printf("%d\n",*(ptr+2));
    printf("%d\n",arr);
}
