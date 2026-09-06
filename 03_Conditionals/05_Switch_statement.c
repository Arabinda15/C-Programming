#include<stdio.h>

int main(){
    int day;
    printf("Enter the nth day of week : ");
    scanf("%d", &day);

    switch (day)
    {
        case 1:
            printf("You selected Monday");
            break;
        case 2:
            printf("You selected Tuesday");
            break;
        case 3:
            printf("You selected wednesday");
            break;
        case 4:
            printf("You selected Thursday");
            break;
        case 5:
            printf("You selected Friday");
            break;   
        case 6:
            printf("You selected satureday");
            break;
        case 7:
            printf("You selected Sunday");
            break; 
               
        default:
            printf("Invalid Input");
            break;
    }
    return 0;
}