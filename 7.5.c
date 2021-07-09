#include<stdio.h>

int main(){

int n,a[10],i,j,temp;
printf("Enter the size of the array : ");

scanf("%d",&n);
printf("Input the elements of the array : ");

for(int i=0;i<n;i++)
{
    scanf("%d",&a[i]);
}

for(i=0;i<n-1;i++){

    for(j=i+1;j<n;j++){

        if(a[j]<a[i]){
            temp = a[j];

            a[j]=a[i];

            a[i]=temp;

        }
    }
}

printf("\nThe sorted array is : \n");

for(int i=0;i<n;i++){

    printf("%d ",a[i]);
}
return 0;
}



