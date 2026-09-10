#include<stdio.h>

int sum(int* a, int* b);

int main(){
    int x , y ;
    printf("Enter the value of x and y : ");
    scanf("%d %d", &x , &y);

    printf("The adress of x : %d and y : %d \n", &x , &y);
    printf("The sum of x and y is : %d\n",sum( &x, &y));
    printf("after calling sum the updated value of x is : %d\n", x);
    printf("Sum of x and y after calling sum : %d\n",x+y);
    return 0;
}
int sum(int* a, int* b){
    int result ;
    result = *a + *b ;
    *a = 100 ;
    return result ;
}
    



