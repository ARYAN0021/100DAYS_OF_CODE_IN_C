#include <stdio.h>

int main(){
    int a,b,c;

    printf("enter any three numbers");
    scanf("%d",&a);
    printf("enter any three numbers");
    scanf("%d",&b);
    printf("enter any three numbers");
    scanf("%d",&c);

    if (a>b && a>c)
    printf("first is the largest number");
    else if (b>a && b>c)
    printf("second is the largest number");
    else 
    printf("third is the largest number");

}
