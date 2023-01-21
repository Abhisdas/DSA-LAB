/*5. WAP to take all odd numbers to the first part and all even numbers to the second
part of the array (Use function call).
Example:
Let a[]={ 11, 23, 44, 21, 32, 89, 4, 7, 2, 9}
Then output: {11, 23, 21, 89, 7, 9, 44, 32, 4, 2}
6 odd elements and 4 even elements order can be anything as per your logic
but they should be in first part and last part of the array respectively.*/

#include <stdio.h>
void sep(int *arr, int n)
{
    int i,j,temp;
    for(i=0; i<n; i++)
    {
        if(arr[i]%2==0)
        {
            for(j=i+1; j<n; j++)
            {
                if(arr[j]%2!=0)
                {
                    temp=arr[j];
                    for(; j>i; j--)
                    {
                        arr[j]=arr[j-1];
                    }
                    arr[i]=temp;
                    break;
                }
            }
        }
    }
}
void main()
{
    int n;
    printf("Enter the number of elements in the array : ");
    scanf("%d",&n);
    int arr[n],i;
    printf("Enter the elements in the array :\n");
    for(i=0; i<n; i++)
    scanf("%d",&arr[i]);
    printf("Entered array is :\n");
    for(i=0; i<n; i++)
    printf("%d ",arr[i]);
    printf("\n");
    sep(arr,n);
    printf("Array after required sorting is :\n");
    for(i=0; i<n; i++)
    printf("%d ",arr[i]);
    printf("\n");
}
