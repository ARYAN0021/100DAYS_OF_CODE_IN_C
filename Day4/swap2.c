#include <stdio.h>

int main(){
    int a,b;

    printf("enter any number");
    scanf("%d",&a);

    printf("enter any number");
    scanf("%d",&b);

    printf("before swap :  %d %d \n",a,b);
    a=a+b;
    b=a-b;
    a=a-b;
printf("after swap :  %d %d",a,b);


}
