//Write a C-Program to find the sum of all the elements present in a 2d array
#include <stdio.h>
int main(){
    int n,m;
    printf("Enter number of rows: ");
    scanf("%d",&n);
    printf("Enter number of columns: ");
    scanf("%d",&m);
    int arr[n][m];

    for (int i = 0; i <n; i++)
    {
        for (int j = 0; j<m; j++)
        {
            printf(">>");
            scanf("%d",&arr[i][j]);
        }      
    }

    int sum = 0;
    for (int i = 0; i <n; i++)
    {
        for (int j = 0; j<m; j++)
        {
            sum+=arr[i][j];
        }      
    }
    printf("Sum %d\n",sum);
}