#include <stdio.h>

int main(){
    int n,i;
    printf("Enter the number of elements in the array");
    scanf("%d",&n);
    int arr[n];


    printf("Enter the %d elements \n",n);
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }


    printf("the elements of the array are\n");
     for(i=0;i<n;i++){
        printf("%d",arr[i]);
    }
    return n;
}
