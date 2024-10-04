#include <stdio.h>

int main(){
        int age ;
        // Taking user input for the age
    printf("Enter your age:\n");
    scanf("%d", &age);
    if(age>65){
        printf("you can drive and yor are a senior citizen \n");
    }
    else if (age>40){
        printf("you can drive and you are a elder ");
    }
    else if (age>18){
        printf("you can drive ");
    }
    else{
        printf("you canot derive ");
    }
    return 0;
}