#include<stdio.h>

int main() {
    int r, height;

    // Input radius from the user
    printf("Enter the value of radius:\n");
    scanf("%d", &r);

    // Input height from the user
    printf("Enter the value of height:\n");
    scanf("%d", &height);

    // Calculate and display the area of the circle
    printf("The area of the circle with radius %d is: %.2f\n", r, 3.14 * r * r);

    // Calculate and display the volume of the cylinder
    printf("The volume of the cylinder with radius %d and height %d is: %.2f\n", r, height, 3.14 * r * r * height);

    return 0;
}
