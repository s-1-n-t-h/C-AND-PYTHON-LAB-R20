#include<stdio.h>
#include<limits.h>

int main(){

    int a[20],b[20],count,i,j;


    for(i=0;i<20;i++){

        scanf("%d",&a[i]);
    }

    for(i=0;i<20;i++){
        count=1;

        if(a[i]!=INT_MAX){
        for(j=i+1;j<20;j++){

            if(a[i]==a[j]){

                count++;

                a[j]=INT_MAX;
            }
        }
        b[i]=count;
        }

    }

    for(i=0;i<20;i++){

        if(a[i]!=INT_MAX){

            printf("Frequency of %d is %d int this array .\n",a[i],b[i]);
        }
    }

    return 0;



}
