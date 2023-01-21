/*2. Write a program to find the maximum number of consecutive elements present in
ascending order.*/

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
    int temp=1,max=0;
    for(i=0;i<n;i++)
    {
        if(arr[i]<=arr[i+1])
        temp++;
        else
        {
            if(temp>max)
            max=temp;
            temp=1;
        }
    }
    printf("Max no. of consecutive elements in ascending order = %d",max);
}