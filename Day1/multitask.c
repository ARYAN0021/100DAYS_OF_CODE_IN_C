#include <stdio.h>

int main(){
    int a,b,sum,sub,multiply,quotient;

    printf("enter any number :");
    scanf("%d" , &a);
    
    printf("enter any number :");
    scanf("%d" , &b);

    sum = a+b;
    sub = a-b;
    multiply = a*b;
    quotient = a/b;

    printf("SUM :%d \n " , sum);
    printf("SUBTRACTION : %d \n" , sub);
    printf("multiply : %d \n" , multiply);
    printf("divide : %d \n" , quotient);
    


}