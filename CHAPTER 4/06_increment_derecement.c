#include <stdio.h>

int main(){
    int i =5;
    printf("the value of i is :%d\n ",i);
    i = i+5;
    printf("the value of i is :%d\n ",i);//10
    // i++;
    printf("the value of i is :%d\n ",i++);//  10 valu 10 thi
    printf("the value of i is :%d\n ",i);//  10 valu se  11 ho hai 

    i +=2;
    printf("the value of i is :%d\n ",i);//  13


    /*
    i++ = prints firtsr and then increment i (post incremnet operators)
    ++i= incremnt first i first and then print i (post incremnet opeatores)

    same this like  in  - form suvbtract
    */
    
    return 0;
}