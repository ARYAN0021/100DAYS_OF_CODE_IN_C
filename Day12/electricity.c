//Q24: Write a program to calculate an electricity bill based on units consumed.

#include <stdio.h>

int main(){
    int unit,bill;

    printf("enter unit");
    scanf("%d",&unit);
    if(unit<=100){
      bill=unit*5;
    }else if(unit>=100 && unit<=200){
        bill = unit*7;
    }else if(unit>200 && unit<=300){
        bill= unit*10;
    }else if(unit>300){
        bill = unit*12;
    }

    printf("BILL : %d",bill);
}
