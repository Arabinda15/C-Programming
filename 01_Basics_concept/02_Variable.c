#include<stdio.h>

int main(){

    //Integer variable (Here age!)
    int age = 20;

    //Floating-point variable (Here height!)
    float height = 5.5;

    //Double variable (Here salary!)
    double salary = 25000.50;

    //Character variable (Here grade!)
    char grade = 'A';

    //String (character Array!)
    char name[] = "Arabinda";

    //Display variables
    printf("Name   : %s\n", name);
    printf("Age    : %d years\n", age);
    printf("height : %.1f feet\n", height);
    printf("Salary : %.2lf\n", salary);
    printf("Grade  : %c\n", grade);

    return 0;
}