/*Write a C program that takes 2 nums 
from user and print 1 if the first num is 
greater than the second num otherwise print 0 .
*/
#include<stdio.h>

int main(){
    int a , b ;
    printf("Enter two numbers : ");
    scanf("%d %d", &a , &b);
    printf("%d\n",a>b);
    return 0;
}