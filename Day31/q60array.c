#include <stdio.h>

int main(){

    int n,i,pos=0,neg=0,zero=0;

    printf("enter number of elements");
    scanf("%d",&n);

    int arr[n];

    printf("enter elements");

    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);

        if(arr[i]>0){
            pos++;
        }else if(arr[i]<0)
        neg++;
        else
         zero++;
    }
    printf("NUMBER OF POSITIVE NUMBERS %d \n",pos);
    printf("NUMBER OF NEGATIVE NUMBERS %d \n",neg);
    printf("NUMBER OF ZEROES %d \n",zero);

}