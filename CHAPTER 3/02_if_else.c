#include <stdio.h>

int main()
{

    int age;
    // Taking user input for the age
    printf("Enter your age:\n");
    scanf("%d", &age);
    if (age > 10)
    {
        printf("We are inside if \n  ");
        printf("Your age is greterthan than 10\n");
    }
    else
    {
        printf("your age is not grater than 10");
    }
    return 0;
}