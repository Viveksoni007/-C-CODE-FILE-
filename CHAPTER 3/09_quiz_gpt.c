#include <stdio.h>

int main()
{
    char grade;
    int marks;

    // Taking user input for marks
    printf("Enter your marks: ");
    scanf("%d", &marks);

    // Determine the grade based on the marks
    if (marks <= 100 && marks >= 90)
    {
        grade = 'A';
    }
    else if (marks < 90 && marks >= 80)
    { // Use 'else if' for mutually exclusive conditions
        grade = 'B';
    }
    else if (marks < 80 && marks >= 70)
    {
        grade = 'C';
    }
    else if (marks < 70 && marks >= 60)
    {
        grade = 'D';
    }
    else if (marks < 60 && marks >= 50)
    {
        grade = 'E';
    }
    else
    { // For marks less than 50
        grade = 'F';
    }

    // Print the grade
    printf("Your grade is: %c\n", grade);

    return 0;
}
