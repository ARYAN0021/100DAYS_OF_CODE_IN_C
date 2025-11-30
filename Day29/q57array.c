#include <stdio.h>

int main(){
    int n,sum=0,i;

    printf("Enter number of elements u want to enter in array \n");
    scanf("%d",&n);

    int  arr[n];
    printf("enter the elements\n");

    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
        sum=sum+arr[i];
}
printf("SUM OF THE ELEMENTS OF ARRAY %d \n",sum);

}