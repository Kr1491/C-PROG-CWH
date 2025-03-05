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
    printf("Elements stored succesfully!\n");
    for (int i = 0; i <n; i++)
    {
        for (int j = 0; j<m; j++)
        {
            printf("%d ",arr[i][j]);
        }  
        printf("\n"); 
    }
}