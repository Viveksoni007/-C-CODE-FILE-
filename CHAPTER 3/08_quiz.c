/*
Quick Quiz: Write a program to find grade of a student given his marks based on below:
90 – 100 => A
80 – 90 => B
70 – 80 => C
60 – 70 => D
50 – 60 => E
<50 => F*/

#include <stdio.h>

int main()
{
    char grade;
    int marks;

    // trtupin user to insput the marks you given
    printf("enter your marks:");
    scanf("%d", &marks);
    if (marks <= 100 && marks >= 90)
    {
        grade = 'A';
    }
    else if (marks <= 90 && marks >= 80)
    {
        grade = 'B';
    }
    if (marks <= 80 && marks >= 70)
    {
        grade = 'C';
    }
    if (marks <= 70 && marks >= 60)
    {
        grade = 'D';
    }
    if (marks <= 60 && marks >= 50)
    {
        grade = 'E';
    }
    else
    {
        grade = 'F';
    }

    printf("your grade is :%c\n",grade);

    return 0;
}