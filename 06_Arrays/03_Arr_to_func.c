#include<stdio.h>

void printArray(int arr[] , int n);

int main(){
    int num ;
    printf("Enter the size of array : ");
    scanf("%d", &num);

    int a[num];
    printf("Enter %d element : ",num);
    for (int i = 0;i < num;i++)
    {
        scanf("%d",&a[i]);
    }
    printArray(a,num);
    return 0;
}

void printArray(int arr[] , int n){
    int x;
    printf("Inputed Array is : \n");
    for (int i = 0;i < n;i++)
    {
      printf("%d ", arr[i]); 
    }
    printf("\nEnter index value you want to change : ");
    scanf("%d", &x);

    if(x>=0 && x<n ){
    printf("Input new value: ");
        scanf("%d", &arr[x]);

    printf("New updated Array : \n");
        for(int i = 0; i < n; i++){
            printf("%d ",arr[i]);
        }
    } else {
        printf("Invalid index ! \n");
    }
  
    
}