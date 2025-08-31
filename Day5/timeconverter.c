/*Q10: Write a program to input time in seconds and convert it to hours:minutes:seconds format.*/
#include <stdio.h>

int main(){
    int sec;
printf("enter time in seconds : ");
scanf("%d",&sec);

int hours = sec / 3600;
int min = sec / 60 -hours*60;
int s = sec - hours*3600 - min*60;

printf("%d:%d:%d",hours,min,s);
}
