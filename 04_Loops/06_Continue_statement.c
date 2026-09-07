#include<stdio.h>

int main(){
    for( int i = 1; i<=10; i++){
        if(i == 5){
            continue; //Exit the iteration and continue the loop from next iteration !
        }
        printf("%d\n", i);
    }
    return 0;
}