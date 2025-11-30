#include <stdio.h>

int main(){

    int n,i,a,c=0;

    printf("enter number of elements");
    scanf("%d",&n);

    int arr[n];

    printf("enter elements");

    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("enter element to search in array ");
    scanf("%d",&a);

    for(i=0;i<n;i++){
        if(arr[i]==a){
            printf("FOUND AT INDEX %d \n",i);
            c++;
        } 
        
    
    }
    if(c==0){
        printf("-1");}
}
