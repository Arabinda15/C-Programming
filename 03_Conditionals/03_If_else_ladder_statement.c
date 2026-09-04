#include<stdio.h>

int main(){
    int mark;
    printf("Enter your mark you got in exam : ");
    scanf("%d", &mark);

    if(mark>=90) {
        printf("You got A Grade");
    }else if (mark>=80) {
        printf("You got B Grade");
    }else if (mark>=70) {
        printf("You got C Grade");
    }else if (mark>=55) {
        printf("You got D Grade");
    }else if (mark>=35) {
        printf("You got E Grade");
    }else {
        printf("You Failed in the exam");
    }
    return 0;
}