/*4. WAP program to do the following operations on matrix.
a. Find the number of zero’s
b. Find the sum of all elements above the main diagonal
c. Display all the diagonal elements.
d. Display the matrix in a row major order
e. Display the matrix in a column major order.*/

#include <stdio.h>
void main()
{
    int row,columns;
    printf("Enter the number of rows in the matrix : ");
    scanf("%d",&row); 
    printf("Enter the number of columns in the matrix : ");
    scanf("%d",&columns);
    int arr[row][columns],i,j,zeroes=0,sum=0;
    printf("Enter the elements in the matrix :\n");
    for(i=0; i<row; i++)
    {
        for(j=0; j<columns; j++)
        {
            scanf("%d",&arr[i][j]);
            if(arr[i][j]==0)
            zeroes++;
            if(i<j)
            sum+=arr[i][j];
        }
    }
    printf("Entered matrix is :\n");
    for(i=0; i<row; i++)
    {
        for(j=0; j<columns; j++)
        {
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    printf("There are %d number of zero's in the matrix\n",zeroes);
    printf("The sum of all elements above the main diagonal is %d\n",sum);
    printf("The diagonal elements are :\n");
    for(i=0; i<row; i++)
    for(j=0; j<columns; j++)
    if(i==j)
    printf("%d ",arr[i][j]);
    printf("\n");
    printf("The matrix in a row major order is :\n");
    for(i=0; i<row; i++)
    for(j=0; j<columns; j++)
        printf("%d ",arr[i][j]);
    printf("\n");
    printf("The matrix in a column major order is :\n");
    for(j=0; j<columns ; j++)
    for(i=0; i<row; i++)
    printf("%d ",arr[i][j]); 
    printf("\n");
}