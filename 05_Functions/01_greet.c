#include<stdio.h>

void greet(){
    char name[50];
    printf("Enter Your name : ");
    scanf("%49s", name);
    printf("Hello %s , Good morning !" , name);
    }
int main(){
   greet();
    return 0;
}