#include<stdio.h>

int main(){
    int Age ;
    char citizen ;
    printf("Enter your age : ");
    scanf("%d", &Age);
    printf("Are you a citizen of India 'Y' or 'N' : ");
    scanf(" %c", &citizen);

    if(Age>=18){
        printf("You are eligible for vote ,\n");
        if(citizen == 'Y'){
            printf("and you can vote in India !\n");
        }else{
            printf("but you can't vote in India !\n");
        }
    }else{
        printf("You are not eligible for vote");
    }
    return 0;
}