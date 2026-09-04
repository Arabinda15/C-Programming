/*Write a C program that 
uses the return keyword to return 
the sum of two integers from a function*/

#include<stdio.h>
     
int sumoftwo(int a, int b){
    return a+b;
    }
int main(){ 
    int i , j , sum ;
    printf("Sum of two numbers through Function\n"); 
    printf("Enter the  Numbers : ");
    scanf("%d %d", &i ,&j);
    sum = sumoftwo(i,j);  
    printf("The Sum of two numbers is : %d", sum );
    return 0;

}