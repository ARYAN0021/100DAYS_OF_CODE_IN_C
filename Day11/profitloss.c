//Q22: Write a program to find profit or loss percentage given cost price and selling price.

#include <stdio.h>

int main(){
    float cp,sp;

    printf("enter the cost price and selling price  : ");
    scanf("%f %f",&cp,&sp);

    float profit = sp-cp;
    float loss = cp-sp;
    float profitpercentage =  (profit/cp)*100;
    float losspercentage = (loss/cp)*100;

    if(sp>cp){
        printf("Profit  : %.2f" ,profitpercentage);
    }else if (sp<cp){
        printf(" loss : %.2f", losspercentage);
    }
}
