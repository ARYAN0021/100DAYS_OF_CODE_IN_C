//Q29: Write a program to calculate the factorial of a number.

#include <stdio.h>

int main(){
    int i,n,f=1;

    printf("enter any number whose factorial is to be printed : ");
    scanf("%d",&n);

    for(i=1;i<=n;i++){
        f=f*i;
    }

    printf("factorial : %d ",f);


}