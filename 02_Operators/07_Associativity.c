#include<stdio.h>

int main(){
    printf("Associativity & Precedence in C\n");

    int result1 = 10 * 5 + 2; // '*' has higher precedence than '+' .
    printf("10 * 5 + 2 = %d\n",result1); // Associativity : Higher precedence evaluate first then other .

    int result2 = 20 / 5 * 2; // '*' and '/' has same precedence .
    printf("20 / 5 * 2 = %d\n",result2); // Associativity : Same precedeence evaluates from left - right .

    int result3 = 10 + 5 * 2 - 6 / 3; 
    printf("10 + 5 * 2 - 6 / 3 = %d\n", result3);

    return 0;
}