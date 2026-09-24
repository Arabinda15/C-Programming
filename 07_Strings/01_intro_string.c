#include<stdio.h>

int main(){
    char name[10];
    printf("Strings in C\n");

    printf("Enter your name : ");
    scanf("%s",name);

    printf("Hello %s !", name);
    return 0;
}