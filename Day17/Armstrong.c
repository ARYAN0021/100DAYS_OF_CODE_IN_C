//Write a program to check if a number is an Armstrong number.
#include <stdio.h>
int main(){
    int n,n1,sum=0;
    printf("enter any number : ");
    scanf("%d",&n);
    n=n1;

    while(n!=0){
    int r = n % 10;
    sum =sum +(r*r*r);
    n=n/10;
    }
    if(sum==n1){
    printf("entered number is a Armstrong number");
    }else
    printf("not a armstrong number");

}
