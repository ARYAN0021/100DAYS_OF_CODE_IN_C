//Q28: Write a program to print the sum of the first n even numbers.

#include <stdio.h>

int main(){
    int n,f=1;


    printf("enter any number");
    scanf("%d",&n);

    for(int i=1;i<=n;i++){
        if(i%2==0){
        f=f*i;        
}
    }

    printf("product of even number is: %d",f);

}
