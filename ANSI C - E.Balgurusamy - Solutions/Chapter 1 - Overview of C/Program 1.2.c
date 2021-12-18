// Modify Program 1.1 to provide Border lines to the address

#include<stdio.h>

void main()
{
    char name[100],city[100],street[100];
    int doorno,pincode;

    printf("Enter Name of the Customer:");
    scanf("%s",&name);

    printf("Enter Door Number of the Customer:");
    scanf("%d",&doorno);

    printf("Enter Street Name of the Customer:");
    scanf("%s",&street);

    printf("Enter City the Customer lives in:");
    scanf("%s",&city);

    printf("Enter Pincode of the City:");
    scanf("%d",&pincode);

    printf("------------------------");
    printf("\n|\t%s\t\t|\n",name);
    printf("|\t%d,%s\t|\n",doorno,street);
    printf("|\t%s,%d\t|\n",city,pincode);
    printf("-------------------------");
            
}