#include<stdio.h>
int main(){
    int age;
    float salary;

    printf("Enter your age :\n");
    scanf("%d", &age); // %d is the format specifier for int

    printf("Enter your salary :\n");
    scanf("%f", &salary); // %f is the format specifier for float

    printf("You are %d years old and get a salary of %.2f",age ,salary);

    return 0;
}