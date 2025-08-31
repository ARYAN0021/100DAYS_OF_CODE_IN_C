//Q9: Write a program to calculate simple and compound interest for given principal, rate, and time.
#include <stdio.h>
#include <math.h>

int main(){
    float p,r,t;
    float si,ci;

    printf("enter principal , rate and time");
    scanf("%f %f %f",&p,&r,&t);

    si=(p*r*t)/100;
    printf("SImple Interest %.2f \n" , si);


    ci= p*pow((1+r/100),t);
    printf("Compound Interest %.2f \n" , ci);


}
