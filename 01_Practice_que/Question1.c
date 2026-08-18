/*Write a C program to declare
 variables for your age, height, and grade,
 assign values to them, and display their values*/

#include<stdio.h>

int main(){
    int Age;
    float Height;
    char Grade;
    
    printf("Age :");
    scanf("%d", &Age);

    printf("Height :");
    scanf("%f", &Height);

    printf("Grade :");
    scanf(" %c", &Grade);

    printf("You are %d years old having a height of %.1f feet and get a %c grade", Age,Height,Grade);
    return 0;

}