//USING DO WHILE LOOP 


// #include <stdio.h>

// int main(){
//     int i=1;
//     int sum=0;
//     do 
//     {
//         sum +=i;
//         i++;

//     }while (i<=10);
//     printf("The sum of first 10 natural number is %d",sum);
    
//     return 0;
// }


//  USING FOR LOOP THIS SAME CODE
#include <stdio.h>

int main(){
    int sum=0;
    for (int i = 0; i <= 10; i++)
    {
        sum +=i;
        
    }
    
    printf("The sum of first 10 natural number is %d",sum);
    
    return 0;
}