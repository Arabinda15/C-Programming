#include<stdio.h>

int main(){
    printf("Increment & Decrement Operators in C\n");
    int a = 10 , A = 5;

    //Increment Operators

    /*Post Increment : First assign and Print 
    then increases the value .
    */
    printf("Post Increment : %d\n",a++); //10
    printf("After a++ : %d\n", a); //11
    /*Pre Increment : First increases the value 
    then print . 
    */
    printf("Pre Increment : %d\n",++A); //6
    printf("After ++A : %d\n", A);//6

    //Decrement Operators

    /*Post Decrement : First assign and Print 
    then Decreases the value .
    */
    printf("Post Decrement : %d\n",a--);//11
    printf("After a-- : %d\n", a);//10
    /*Pre Decrement : First Decreases the value 
    then print . 
    */
    printf("Pre Decrement : %d\n",--A);//5
    printf("After --A : %d\n", A);//5

    return 0;
}