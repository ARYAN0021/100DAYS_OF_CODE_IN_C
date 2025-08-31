//Write a program to input an integer and check whether it is even or odd using if–else.


#include <stdio.h>

int main(){
     int n;

     printf("Enter a number  :");
     scanf("%d",&n);

     if(n%2==0){
        printf("THE ENTERED NUMBER IS EVEN");
     }else{
        printf("THE ENTERED NUMBER IS ODD");
     }
}
