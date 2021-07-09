#include<stdio.h>

int main()
{
    int arr[100],*ptr,n,sum=0;

    printf("\nInput the number of elements to be added :");

    scanf("%d",&n);

    printf("\nInput the elements one by one with space in between them :");

    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }

    for(ptr=&arr[0];ptr<=&arr[n-1];ptr++)
    {
        sum+=*ptr;
    }

    printf("\nThe sum of the elements of the given array is :%d\n",sum);

    return 0;

}
