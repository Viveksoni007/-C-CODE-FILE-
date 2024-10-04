#include <stdio.h>
// function prototype
int sum(int, int);

// function defination
int sum(int x, int y)
{
    printf("the sum is %d\n", x + y);
    return x+y;
}
int main()
{
    int a = 1;
    int b = 2;
    sum(a, b); // function call kate hai
    // TODO: THAT WORKS ANOTHER FORM USE ONLY ONE FUNCTION 
    // int c= sum(a,b); // ye function tab kam karta hai function m print na ho matbal only function call ke liye jis
    // printf("%d",c);
    // int c= a+b;
    // printf("the sum is  %d\n",c);
    int a1 = 23;
    int b1 = 23;
    sum(a1, b1); // function call kate hai
    // int c1= a1+ b1;
    // printf("the sum is %d\n",c1);

    return 0;
}