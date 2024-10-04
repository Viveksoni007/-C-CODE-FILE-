#include <stdio.h>
//10!= 10x9x8x7x6x5x4x3x2x1x
//0!  1
int main(){
    int product=1;
    int n =1;
    int i=1;
    printf("Enter the value is :");
    scanf("%d",&n);
    while (i<=n)
    {
        product *=i;
        i++;
    }
    
    printf("the Factorial is %d",product);
    return 0;
}