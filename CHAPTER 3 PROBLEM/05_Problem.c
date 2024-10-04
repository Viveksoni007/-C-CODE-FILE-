/*Write a program to determine whether a character entered by the user is lowercase or not.*/

// https://www.cs.cmu.edu/~pattis/15-1XX/common/handouts/ascii.html
#include <stdio.h>

int main()
{
    char ch = 'a';
    printf("The charcter is = %c\n", ch);
    printf("The charcter is = %d\n", ch);
// 97 to 122  is lowerr case number 

    if(ch>=97 && ch<=122){
        printf("This chacrater is lower case \n");
    } 
    else{
        printf("This chacrater is Upper case \n");
    }
    return 0;
}