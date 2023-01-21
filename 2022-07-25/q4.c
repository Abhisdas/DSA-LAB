//4. WAP to display the following triangular matrix of 2-D array

#include <stdio.h>
void main()
{
    int mat[5][5],i,j,count=1;
    for(i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
        mat[i][j]=count++;
    }
    for(i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
        {
            (i>j)?printf("%d ",mat[i][j]):printf(" ");
        }
        printf("\n");
    }
    int k=4;
    for(i=1;i<5;i++)
    {
        printf("\n");
        for(j=1;j<5;j++)
        (j>=k)?printf("%d ",mat[i][j]):printf("   ");
        k--;

    }
    printf("\n");
    for(i=0;i<5;i++)
    {
        printf("\n");
        for(j=0;j<5;j++)
        (i<j)?printf("%d ",mat[i][j]):printf("  ");
    }
    k=4;
    for(i=0;i<4;i++)
    {
        printf("\n");
        for(j=0;j<k;j++)
        printf("%d  ",mat[i][j]);
        k--;
        
    }
}