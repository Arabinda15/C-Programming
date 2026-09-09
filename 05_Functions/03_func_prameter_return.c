#include<stdio.h>

int sum(int a, int b); // Function Declaration

int main(){
    int i, j;
    printf("Enter two number : ");
    scanf("%d %d", &i,&j);
    printf("The sum of numbers : %d",sum(i,j));
    return 0;
}
int sum(int a,int b){ //Function definition
    int sum = a+b;
    return sum;
} 