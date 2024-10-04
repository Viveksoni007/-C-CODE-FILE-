#include <stdio.h>

int main(){
    int age ;
        // Taking user input for the age
    printf("Enter your age:\n");
    scanf("%d", &age);
    if(age>10){
        printf("We are inside if \n  ");
        printf("Your age is greterthan than 10\n");
    }
        if(age%5==0){
        printf("We are inside anoter if if \n  ");
        printf("Your age is divisible by 50");
        }
    return 0;
}