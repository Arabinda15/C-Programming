#include<stdio.h>

int main(){
    char name[50];
    printf("Enter your full name : \n");

    fgets(name,sizeof(name),stdin);
    // printf("Welcome %s", name);
    printf("Hello %s", name);
    return 0;
}