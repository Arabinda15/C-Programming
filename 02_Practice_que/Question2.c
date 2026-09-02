/*Write a program that checks whether a person is eligible to vote. A person is
eligible if their age is 18 or above and they are a citizen (use 1 for Yes, 0 for No).
Print 1 for yes and 0 for no*/
#include<stdio.h>

int main(){
    int age;
    int citizen;

    printf("Enter your age: ");
    scanf("%d", &age);

    printf("Are you a citizen? (1 = Yes, 0 = No): ");
    scanf("%d", &citizen);

    printf("%d\n", age >= 18 && citizen == 1);

    return 0;
}