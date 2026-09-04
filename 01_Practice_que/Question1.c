/*Write a C program to declare
 variables for your name, age, height, and grade,
 assign values to them, and display their values*/

#include<stdio.h>

int main(){
    char Name[50];  
    int Age;
    float Height;
    char Grade;

    printf("Name :");
    scanf("%s", &Name);

    printf("Age :");
    scanf("%d", &Age);

    printf("Height :");
    scanf("%f", &Height);

    printf("Grade :");
    scanf(" %c", &Grade);

    printf("Your name is %s,You are %d years old, %.1f feet Tall, and got a %c grade",Name,Age,Height,Grade);
    return 0;

}