#include <stdio.h>

int main(){
    int n,sum =0;

    printf("enter your number");
    scanf("%d",&n);

    while(n!=0){
        int r=n%10;
        sum = sum +r;
        n=n/10;
    }
    printf("sum of digits : %d",sum);
}
