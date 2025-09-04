//Q23: Write a program to calculate a library fine based on late days.
#include <stdio.h>

int main(){
    int days,fine;

    printf("enter number of late days : ");
    scanf("%d",&days);

    if(days<=5){
        fine = days*2;
    }else if(days>5 && days<=20){
        fine = days*4;
    }else if(days>20 && days<=30){
        fine = days*6;
    }else if(days>30){
        printf("MEMBERSHIP CANCELED");
    }

    printf("FINE : %d",fine);

}
