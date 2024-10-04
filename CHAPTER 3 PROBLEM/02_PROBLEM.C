/*
Write a program to determine whether a student has passed or failed. 
To pass, a student requires a total of 40% and at least 33% in each subject.
Assume there are three subjects and take the marks as input from the user.*/

#include <stdio.h>

int main()
{
    int marks1,marks2,marks3;
    printf("Enter marks1:\n");
    scanf("%d",&marks1);
    printf("Enter marks2:\n");
    scanf("%d",&marks2);
    printf("Enter marks3:\n");
    scanf("%d",&marks3);
    printf("the marks are %d %dand %d\n ",marks1,marks2,marks3);
    
    if(marks1<33 || marks2<33 ||marks3<33){
        printf("Your Are falied Due To to less marks in individual subjects (s)\n");
    }
    else if ((marks1+marks2+marks3)/3 <40){
        printf("Your are falied due less perchantage :\n");

    }
    else{
        printf("Your are passed ");
    }

    return 0;
}