/*. Write a C program using const
to store the value of PI = 3.14159 
and calculate the area of a circle.*/

#include<stdio.h>

int main(){
    int rad;
    const float PI = 3.14159;
    float Area;
    printf("Calculating the Area of Circle\n");

    printf("Enter the value of radius : ");
    scanf("%d", &rad);
    Area = PI * rad * rad;
    printf("The Area of circle is %.2f unit Square.",Area);
    return 0;
}