#include <stdio.h>

int main(){
    float temp1 , temp2;
     printf("enter your temperature in celcius : ");
     scanf("%f",&temp1);

     temp2 = ((temp1*9/5) + 32);

     printf("converted temperature is : %.2f",temp2);

}
