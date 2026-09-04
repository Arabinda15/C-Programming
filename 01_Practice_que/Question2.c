/*Write a C program to declare two integer
variables, assign them values, and print
their sum, difference, product, and quotient.*/

#include<stdio.h>

int main(){
    int a , b ;
    int sum , difference , product ,quotient;

    printf("Enter two numbers :");
    scanf("%d %d", &a ,&b);
    
    printf("sum of numbers : %d\n", a+b);
    printf("difference of numbers : %d\n", a-b);
    printf("product of numbers : %d\n", a*b);
    printf("Quotient of numbers :%d\n",a%b);

    return 0;
}