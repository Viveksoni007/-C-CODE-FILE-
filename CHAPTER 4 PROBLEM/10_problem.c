#include <stdio.h>

int main(){
    int n;
    int prime =0;
    printf("Enter a number: ");
    scanf("%d", &n);
    if(n==0 || n==1){
        prime =1;
    }
    else{
        
    
    for (int i = 2; i < n; i++)
    {
        if (n%i==0 && n!=2){
            prime=1;
            break;
        }
    }
    }
    if(prime){
        printf("%d this is not prime number \n",n);
    }
    else{
        printf("%d this  prime number \n",n);
    }
    
    return 0;
}