//Q1: WAP to find the smallest & largest number in the array (in a single loop)

#include <stdio.h>
void main()
{
    int n,i;
    printf("Enter the number of elements in the array : ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the elements in the array : \n");
    for(i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);
    }
    int min=arr[0],max=arr[0];
    for(i=0; i<n; i++)
    {
        if(min > arr[i])
        min = arr[i];
        if(max < arr[i])
        max = arr[i];
    }
    printf("The smallest number in the array is : %d\n",min);
    printf("The largest number in the array is : %d\n",max);
}