#include<stdio.h>

int main(){
    int a = 5 , b = 3;
    printf("logical Operators in C\n");
    
    printf("a<10 && b<2 :%d\n", a<10 && b<2);    
    printf("a<10 || b<2 :%d\n", a<10 || b<2);    
    printf("!(a<10) :%d\n",!(a<10));    

    return 0;
}