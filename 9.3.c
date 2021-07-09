#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n,sum=0,*ptr,i;

    printf("Please Input the no of numbers to be added : ");
    scanf("%d",&n);
    ptr = (int*)calloc(n,sizeof(int));

    for(i=1;i<=n;i++)
    {
        printf("Please Input the %d number : ",i);
        scanf("%d",ptr);
        sum+= *ptr;
        ptr++;
    }
    printf("The sum is : %d",sum);
    return 0;
}

