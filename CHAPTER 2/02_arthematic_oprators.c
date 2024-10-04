#include <stdio.h>

int main(){
    int a=5;
    int b =3;
    int c =a+b;
    printf("the value of a is :%d and the vlaue of b is :%d and the sum %d \n",a,b,c);
    //modulus operaor is used to get remainder
    printf("The remainder when a is divided by b is %d",a%b);



    // this does not work for expoentiation  in c is 
    // int d =a^b;   is not valid in squre find 
    //to find in c usedv math.h method
    return 0;
}