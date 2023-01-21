/*6. WAP to arrange first half of the array in ascending order and second half of the
array in descending order. (Use function call).
Example:
Let a[]={ 11, 23, 44, 21, 32, 89, 4, 7, 2, 9}
1 st half contains 5 elements as {11, 23, 44, 21, 32} and 2 nd half contains 5
elements as {89, 4, 7, 2, 9}.
Output: a[]= {11, 21, 23, 32, 44, 89, 9, 7, 4,2}*/

#include <stdio.h>
void sp_sort(int *arr, int n)
{
    int i,j,temp;
    for(i=0; i<n/2; i++)
    {
        for(j=i+1; j<n/2; j++)
        {
            if(arr[i]>arr[j])
            {
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    for(i=n-1; i>=n/2; i--)
    {
        for(j=i-1; j>=n/2; j--)
        {
            if(arr[i]>arr[j])
            {
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
}
void main()
{
    int n;
    printf("Enter the number of elements in the array :\n");
    scanf("%d",&n);
    int i,arr[n];
    printf("Enter the elements in the array:\n");
    for(i=0;  i<n; i++)
    scanf("%d",&arr[i]);
    printf("Entered array is :\n");
    for(i=0;  i<n; i++)
    printf("%d ",arr[i]);
    printf("\n");
    sp_sort(arr,n);
    printf("Sorted array is :\n");
    for(i=0;  i<n; i++)
    printf("%d ",arr[i]);
}