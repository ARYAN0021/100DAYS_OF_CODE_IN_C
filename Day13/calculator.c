#include<stdio.h>

int main(){
    int a,b,n;
    printf("enter no.'s :");
    scanf("%d %d",&a,&b);

    printf("enter your case for performing operations :");
    scanf("%d",&n);
   
    switch(n){
        case 1:
        printf("%d",a+b);
        break;
        case 2:
        printf("%d",a-b);
        break;
        case 3:
        printf("%d",a*b);
        break;
        case 4:
        printf("%d",a/b);
        break;
        case 5:
        printf("%d",a%b);
        break;
        default:
        printf("use correct operation");

    }
}