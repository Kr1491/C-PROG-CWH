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

    printf("Array stored succesfully!\n");

    printf("The array elements are: ");
    for (int i=0;i<n;i++){
        printf("%d ", arr[i]);
    }
}