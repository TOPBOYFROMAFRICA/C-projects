#include<stdio.h>
int main(){
int age;
char answer;
printf("Enter Your Age?\n");
scanf("%d",&age);
if(age>18){
    printf("\nEligible to drive,Do you wish to drive? y/n");
    scanf("%s",&answer);
    if(answer=='y' || answer=='Y'){
        printf("\nThe car is in the Garage");
    }
    else{
        printf("Have a nice day");
    }
}
else{
    printf("You are too young to drive.");
}
}
