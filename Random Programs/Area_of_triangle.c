/* 
WAP to find the area of a tringle using herons formula
        sqrt(s*((s-a)*(s-b)*(s-c)))
        s=(a+b+c)/2
*/

#include<stdio.h>
#include<math.h>

void main()
{
    int a,b,c;
    float s,area;

    printf("Enter Side A:");
    scanf("%d",&a);

    printf("Enter Side B:");
    scanf("%d",&b);

    printf("Enter Side C:");
    scanf("%d",&c);

    s=(a+b+c)/2;

    area=sqrt(s*((s-a)*(s-b)*(s-c)));

    printf("\nArea :%.2f\n",area);
}