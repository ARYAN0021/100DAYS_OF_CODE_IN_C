#include <stdio.h>

int main(){
    int n,i,min,max;

    printf("enter the number of elements in array");
    scanf("%d",&n);
    int arr[n];

    printf("Enter the elements of array");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);    
        min=arr[0];
        max=arr[0];

        if(max<arr[i]){
            max=arr[i];
        }else if(min>arr[i]){
            min=arr[i];
        }

    }
printf("MAXIMUM %d \n",max);
printf("MINIMUM %d \n",min);

}
