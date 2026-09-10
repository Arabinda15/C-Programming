#include<stdio.h>

int sumOfTwo(int a,int b); //Function Declaration .

int main(){
    int x , y ;
    printf("Enter the value of x and y : ");
    scanf("%d %d", &x,&y);
    sumOfTwo(x,y);
    printf("After calling sum value of x : %d and y : %d\n", x,y);
    printf("The sum of x and y : %d", x+y);
    return 0;
}
int sumOfTwo(int a, int b){
    printf("Enter the value of a and b : ");
    scanf("%d %d", &a,&b);
    printf("Insider sum value of a : %d and b : %d\n", a,b);
    return a+b; 
}