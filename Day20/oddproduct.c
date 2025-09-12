#include <stdio.h>

int main(){
    int n,l,pro=1;
printf("enter a number : ");
scanf("%d",&n);

    while(n!=0){
        l=n%10;
        if(l%2!=0){
            pro =pro * l;
        }
        n=n/10;
    }
    printf("product:%d",pro);
}
