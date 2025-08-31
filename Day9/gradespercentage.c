/*Q18: Write a program to assign grades based on a percentage input.


Sample Test Cases:
Input 1:
95
Output 1:
Grade A

Input 2:
82
Output 2:
Grade B

Input 3:
68
Output 3:
Grade D

Input 4:
50
Output 4:
Grade E

*/

#include <stdio.h>

int main(){
    int percentage;

    printf("Enter your percentage");
    scanf("%d",&percentage);

if (percentage>=90 && percentage<=100){
    printf("Your Grade is A");
}else if(percentage<=89 && percentage>=80){
    printf("Your grade is B");
}else if(percentage<=79 && percentage>=70){
    printf("Your grade is C");
}else if(percentage<=69 && percentage>=60){
    printf("Your grade is D");
}else if(percentage<=59 && percentage>=50){
    printf("Your grade is E");
}



}