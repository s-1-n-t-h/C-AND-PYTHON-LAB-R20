#include<stdio.h>

int main(){

int i,n,N,sum;

printf("Enter the no of inputs to be taken : ");

scanf("%d",&n);

i=1;

sum=0;

while(i<=n){

        printf("\nEnter a inter value :");

        scanf("%d",&N);

        if(N>=0){

            sum = sum + N;

            i++;
        }
        else{

            i++;

        }



}

printf("The sum of the given integer inputs is = %d",sum);

return 0;

}
