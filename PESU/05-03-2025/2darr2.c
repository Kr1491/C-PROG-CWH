//Write a C-Program to find the sum of all the elements stored in 1-D array


#include <stdio.h>
int main(){
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter the array elements: ");
    for (int i=0;i<n;i++){
        scanf("%d", &arr[i]);
    }
    int sum = 0;
    for (int i=0;i<n;i++){
        sum+=arr[i];
    }
    printf("Sum is %d",sum);
}