#include<stdio.h>

int main(){
    int m , n ;
    printf("Enter the 2D array row no & col no :\n");
    scanf("%d %d", &m, &n);

    int arr[m][n];
    printf("Enter the elements of 2D array :\n");
    
    for (int i = 0; i < m;i++)
    {
       for (int j = 0; j < n;j++)
       {
       scanf("%d", &arr[i][j]);
       }

    }
    printf("The inputed 2D array : \n");
    for (int i = 0; i < m;i++)
    {
        for (int j = 0; j < n;j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");       
    }
    return 0;
}