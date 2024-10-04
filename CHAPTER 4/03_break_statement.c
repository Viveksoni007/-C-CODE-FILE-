#include <stdio.h>

int main(){
    for (int i = 0; i < 15; i++)
    {

        if(i==5){
            break; /// exit the loop   now @!!!!!!!
            continue;// skip this value written in box lloop  then contnue the program
        }
        printf("i is tha value %d\n",i);
    }
    
    printf("for loop done ok");
    
    return 0;
}