//Q19: Write a program to classify a triangle as Equilateral, Isosceles, or Scalene based on its side lengths.
#include <stdio.h>

int main(){
    int side1, side2,side3;

    printf("enter three sides of the triangle : ");
    scanf("%d %d %d" ,&side1,&side2,&side3);

    if(side1==side2 &&side1 == side3 && side2==side3){
        printf("the triangle is equilateral");
    }else if(side1==side2 || side1==side3 || side3==side2){
        printf("the triangle is isosceles");
    }else{
        printf("the triangle is scalene");
    }
}