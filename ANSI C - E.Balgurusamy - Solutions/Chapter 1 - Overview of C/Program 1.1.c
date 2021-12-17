/* Write a Program that will print you mailing address in the following form:
First Line:     Name
Second Line :   Door No,Street
Third Line:     City and Pincode
*/

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

    printf("\n%s\n",name);
    printf("%d,%s\n",doorno,street);
    printf("%s,%d\n",city,pincode);
}