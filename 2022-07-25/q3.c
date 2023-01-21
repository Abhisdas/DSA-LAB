/*3. In a one dimensional array, user gives a certain range of index with shifting
value. You need to right shift and rotate those range of values based on the given
shifting value.
Given array: 2,9,6,3,5,8,11,3,6,7,13,5
Given range: 4th index to 9th index(consider the starting index is 0) and shifting
value is 2
Output: 2,9,6,3,6,7,5,8,11,3,13,5*/


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
    int start,end,shift;
    printf("Enter the starting & ending range of index respectively :\n");
    scanf("%d %d",&start,&end);
    printf("Enter the shifting value :\n");
    scanf("%d",&shift);
    int a[shift],j=0;
    for(i=end-shift+1; i<=end; i++)
    a[j++]=arr[i];
    for(i=end-shift; i>=start; i--)
    {
        arr[i+shift]=arr[i];
    }
    j=0;
    for(i=start;i<start+shift;i++)
    {
        arr[i]=a[j++];
    }
    printf("Modified array is :\n");
    for(i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
}