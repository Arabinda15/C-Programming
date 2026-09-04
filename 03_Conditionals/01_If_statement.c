#include<stdio.h>

int main(){
    int age ;
    printf("Enter Your Age : ");
    scanf("%d", &age);

    if(age>=18){
        printf("You are eligible for vote");
    }
    return 0;
}