//Q2: WAP to reverse the array without using second array

#include <stdio.h>
void main()
{
    int n,i,temp; 
    printf("Enter the number of elements in the array : ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the elements in the array : \n");
    for(i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0; i<n/2.0; i++)
    {
        temp=arr[i];
        arr[i]=arr[n-1-i];
        arr[n-1-i]=temp;
    }
    printf("\nThe reversed array is :\n");
    for(i=0; i<n; i++)
    {
        printf("%d ",arr[i]);
    }
}