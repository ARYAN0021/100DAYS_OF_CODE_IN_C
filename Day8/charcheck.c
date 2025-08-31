/* Write a program to input a character and check whether it is an uppercase alphabet, lowercase alphabet, digit, or special character.*/

#include <stdio.h>

int main(){
    char ch;

    printf("enter your character :");
    scanf("%c",&ch);

    if (ch >= 'A' && ch<= 'Z')
        printf("the character given by the user is upper case");
    else if (ch>='a' && ch<='z')
        printf("character entered by user is lower case");
    else if (ch>='0' && ch<='9')
        printf("character entered is a digit");
    else
        printf("The character entered is a special character");
    
}