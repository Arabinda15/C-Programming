#include<stdio.h>

int main(){
    printf("Typecasting in C\n");

    //Implicit Type Casting
    int a = 10;
    float b = 5.6;
    float sum = a+b;
    printf("Implicit Type Casting :%.2f\n", sum) ;

    //Explicit Type Casting 
    int x = 5 , y = 3 ;
    printf("Explicit Type Casting :%.2f\n",(float) x+y ) ;

return 0;
}






