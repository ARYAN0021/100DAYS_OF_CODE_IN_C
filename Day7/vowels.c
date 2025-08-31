//Q14: Write a program to input a character and check whether it is a vowel or consonant using if–else.
#include <stdio.h>
 int main(){
    char ch;

    printf("enter a alphabet");
    scanf("%c",&ch);

    if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'){
        printf("entered character is a vowel");
    }else{
        printf("entered character is a consonant");
    }
 }