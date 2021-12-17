// WAP to add and subtract two matrices
#include<stdio.h>

void main()
{
    int m1[10][10],m2[10][10],i,j,m,n,x,y;

    printf("Enter Rows and Columns of Matrix 1:");
    scanf("%d %d",&m,&n);

    printf("Enter Rows and Columns of Matrix 2:");
    scanf("%d %d",&x,&y);

    if(m!=x || n!=y)
    {
        printf("Operations not possible as size of two matrices are not same.");
    }

    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("Enter Element [%d][%d] of Matrix 1:",i,j);
            scanf("%d",&m1[i][j]);
        }
    }

    for(i=0;i<x;i++)
    {
        for(j=0;j<y;j++)
        {
            printf("Enter Element [%d][%d] of Matrix 2:",i,j);
            scanf("%d",&m2[i][j]);
        }
    }

    printf("Addition of two Matrices\n");

    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%2d ",m1[i][j]+m2[i][j]);
        }
        printf("\n");
    }

    printf("Subtraction of two Matrices\n");

    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%2d ",m1[i][j]-m2[i][j]);
        }
        printf("\n");
    }
}