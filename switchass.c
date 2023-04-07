#include<stdio.h>
int main(){
char symbols;
int num1,num2;
printf("Enter your preferred symbol:+ - / * %%  \n");
scanf("%c",&symbols);
printf("Enter first number\n");
scanf("%d",&num1);
printf("Enter second number\n");
scanf("%d",&num2);
switch(symbols){
case'+':
    printf("The sum of the calculation is %d",(num1+num2));
    break;
    case'-':
    printf("The sum of the calculation is %d",(num1-num2));
    break;
    case'*':
    printf("The sum of the calculation is %d",(num1*num2));
    break;
    case'/':
    printf("The sum of the calculation is %d",(num1/num2));
    break;
    case'%':
    printf("The sum of the calculation is %d",(num1%num2));
    break;
    default:
        printf("invalid input");

}


}
