/*Write a program that demonstrates the difference between pre-increment (++x)
and post-increment (x++) operations. Print the value of a variable before and after
each operation.*/

#include <stdio.h>

int main() {
    int x = 5;

    // Before pre-increment
    printf("Before pre-increment: %d\n", x);

    printf("Pre-increment: %d\n", ++x);

    // After pre-increment
    printf("After pre-increment: %d\n", x);

    // Before post-increment
    printf("Before post-increment: %d\n", x);

    printf("Post-increment: %d\n", x++);

    // After post-increment
    printf("After post-increment: %d\n", x);

    return 0;
}