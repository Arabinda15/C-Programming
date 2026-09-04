/*Write a C program to store 
the length and breadth of a rectangle in variables 
and calculate its area and perimeter.*/
#include<stdio.h>

int main(){
    int length,breadth,Area,Perimeter;
    printf("Calculating Rectangle Area and Perimeter !\n");

    printf("Enter Length of Rectangle : ");
    scanf("%d", &length);
    printf("Enter Breadth of Rectangle : ");
    scanf("%d", &breadth);
    Area = length * breadth ;
    Perimeter = 2*(length+breadth);
    printf("Area of Rectangle is : %d\n",Area);
    printf("Perimeter of Rectangle is : %d\n",Perimeter);

    return 0;
}