//Q34: Write a program to check if a number is prime.

#include <stdio.h>

int main(){
    int n,i;
printf("enter number");

scanf("%d",&n);

for(i=1;i<=n;i++){
if(n%i!=0){
    printf("entered number is prime number");
}else
printf("entered number is not a prime number");
}

}