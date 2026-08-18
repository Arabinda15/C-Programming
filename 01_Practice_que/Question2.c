/*Write a C program to declare 
two integer variables, assign values to them, 
and print their sum, difference, and product.*/

#include<stdio.h>

int main(){
    int a , b ;
    int sum , difference , product ;

    printf("Enter two numbers :");
    scanf("%d %d", &a ,&b);
    
    printf("sum of numbers : %d\n", a+b);
    printf("difference of numbers : %d\n", a-b);
    printf("product of numbers : %d\n", a*b);

}