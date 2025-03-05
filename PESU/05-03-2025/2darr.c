//2D Array

/*
(0,0) (0,1) (0,2)
(1,0) (1,1) (1,2)
(2,0) (2,1) (2,2)
*/

#include <stdio.h>
int main(){
    int n,m;
    printf("Enter the number of rows: ");
    scanf("%d", &n);
    printf("Enter the number of columns: ");
    scanf("%d", &m);

    int arr[n][m];

    printf("Enter the array elements: ");
    for (int i=0;i<n;i++){
        for (int j=0;j<m;j++){
            scanf("%d", &arr[i][j]);
        }
    }

    printf("Array stored succesfully!\n");
    printf("The array elements are: \n");
    for (int i=0;i<n;i++){
        for (int j=0;j<m;j++){
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
}