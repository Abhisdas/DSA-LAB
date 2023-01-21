/*In a one dimensional array find out all the elements, which is the summation of
its immediate previous contiguous elements and those previous elements including
that element are either in ascending or descending order.
Ex: Given array: 2,9,3,6,9,8,17,3,6,4,13,5
Output: output is 9, which is a summation of it’s previous elements 3 and 6*/

#include <stdio.h>
#include <stdlib.h>
void main()
{
    int n;
    printf("Input the no. of elements : ");
    scanf("%d",&n);
    int *a=(int *)malloc(n*sizeof(int));
    printf("Enter the elements :\n");
    int i;
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    for(i=0;i<n-2;i++)
    {
        if(a[i]<=a[i+1] && a[i+1]<=a[i+2] && a[i]+a[i+1]==a[i+2])
        printf("%d ",a[i+2]);
    }
}