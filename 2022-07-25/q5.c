//5.WAP function that will sum the surrounding elements of a given element in the matrix.

#include <stdio.h>
void main()
{
    int rows,columns;
    printf("Enter the no. of rows & columns respectively :\n");
    scanf("%d %d",&rows,&columns);
    int i,j,mat[rows][columns];
    printf("Enter the elements of the matrix :\n");
    for(i=0;i<rows;i++)
    {
        for(j=0;j<columns;j++)
        scanf("%d",&mat[i][j]);
    }
    printf("\nEntered matrix is :\n");
    for(i=0;i<rows;i++)
    {
        for(j=0;j<columns;j++)
        printf("%d ",mat[i][j]);
        printf("\n");
    }
    int r,c;
    printf("Enter the row index & column index respectively :\n");
    scanf("%d %d",&r,&c);
    int sum=0;
    for(i=r-1;i<=r+1 && i<rows;i++)
    {
        for(j=c-1;j<=c+1 && j<columns;j++)
        {
            if(i==r && j==c)
            continue;
            else 
            sum+=mat[i][j];
        }
    }
    printf("The sum of surrounding elements of the given element is %d.\n",sum);
}