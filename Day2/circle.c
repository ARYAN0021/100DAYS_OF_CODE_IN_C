//Write a program to calculate the area and circumference of a circle given its radius.
#include <stdio.h>

int main(){
  int r;

  printf("enter radius");
  scanf("%d",&r);

  printf("Area of circle %f \n" ,(float)3.14*r*r);
  printf("Circumference of circle %f \n",(float)2*3.14*r);
}