/* WAP to find the area and perimeter of the circle */
#include<stdio.h>
#include<math.h>

void main()
{
    int radius;
    float pie=3.14,area,perimeter;

    printf("Enter the radius of the circle :");
    scanf("%d",&radius);

    area=pie*pow(radius,2);
    perimeter=2*pie*radius;

    printf("Perimeter : %.2f\nArea : %.2f\n",perimeter,area);
}