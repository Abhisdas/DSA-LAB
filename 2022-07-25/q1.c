//1. Write a program to remove repeated elements in a given array.

#include <stdio.h>
void main()
{
    int n;
    printf("Enter the number of elements in the array : ");
    scanf("%d",&n);
    int i,arr[n];
    printf("Enter the elements :\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int j,z;
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(arr[j]==arr[i])
            {
                for(z=j;z<n-1;z++)
                {
                    arr[z]=arr[z+1];
                }
                n--;
                j--;
            }
        }
    }
    printf("\nModified array is :\n");
    for(i=0;i<n;i++)
    printf("%d ",arr[i]);
}