//3. WAP to find k th smallest & k th largest element in the array.

#include <stdio.h>
void main()
{
    int n,i,j,temp,min;
     scanf("%d",&n);
    int arr[n];
    printf("Enter the elements in the array : \n");
    for(i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Entered array is:\n");
    for(i=0; i<n; i++)
    printf("%d ",arr[i]);
    printf("\n");
    for(i=0; i<n; i++)
    {
        min=arr[i]; 
        for(j=i+1; j<n; j++)
        {
            if(min > arr[j])
            {
                temp=min;
                min=arr[j];
                arr[j]=temp;
            }
        }
        arr[i]=min;
    }
    printf("The sorted array is ascending order is:\n");
    for(i=0; i<n; i++)
    printf("%d ",arr[i]);
    printf("\n");
    int k;
    printf("Input the value of k: ");
    scanf("%d",&k);
    printf("The k th smallest number is : %d\n",arr[k-1]);
    printf("The k th largest number is : %d\n",arr[n-k]);
}