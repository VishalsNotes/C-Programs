/* Given the radius of the circle, write a program to compute and display its area. 
Use a symbolic constant to define pie value and assume a suitable value for radius */

#include<stdio.h>

void main()
{
    int radius;
    float pie=3.14;

    printf("Enter the Radius of the Circle:");
    scanf("%d",&radius);

    printf("Area of the Circle is : %.2f",pie*radius*radius);
}