// Write a program to find the roots of a quadratic equation and categorize them.


#include <stdio.h>
#include <math.h>
int main(){

int a,b,c;
    printf("input the coefficient of quadratic equation \n");
    printf("enter first coefficient");
    scanf("%d",&a);
    printf("enter second coefficient");
    scanf("%d",&b);
    printf("enter third coefficient");
    scanf("%d",&c);
float root1 = (-b +sqrt(b*b-4*a*c)) / (2*a);

float root2 = (-b -sqrt(b*b-4*a*c)) / (2*a);

if (b*b-4*a*c == 0){
    printf("roots are real and same : %.2f %.2f " ,root1 , root2);
}else if(b*b-4*a*c > 0){
    printf("roots are real and different  : %.2f %.2f " ,root1 , root2);
}else if (b*b-4*a*c < 0){
    printf("roots are imaginary : %.2f %.2f " ,root1 , root2);
}
    


}
