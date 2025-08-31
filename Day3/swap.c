#include <stdio.h>

int main(){
    int a,b,c;

    printf("enter any number :");
    scanf("%d",&a);
    printf("enter any number :");
    scanf("%d",&b);

    printf("before swap %d %d \n", a,b);

    c=a;
    a=b;
    b=c;
    printf("after swap %d %d", a,b);

}