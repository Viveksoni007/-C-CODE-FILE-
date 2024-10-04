#include <stdio.h>
//10!= 10x9x8x7x6x5x4x3x2x1x
//0!  1
int main(){
    int product=1;
    int n ;
    printf("Enter the value is :");
    scanf("%d",&n);
    for (int i = 1; i <=n; i++)
    {
        product *=i;
    }
    
    printf("the Factorial is %d",product);
    return 0;
}