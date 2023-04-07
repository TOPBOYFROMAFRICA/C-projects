#include <stdio.h>
int  main(){
int bal,num1,num2,num3,num4,num5,num6,num7,num8,num9,num10,num11,num12;
printf("How much do you want to recharge?\n");
scanf("%d",&bal);
printf("\nYour account has been credited with N%d\n",bal);
printf("1.Data plans\n2.Check Balance\n3.Quit\n");
printf("________________________________________________________________________________________________\n");
scanf("%d",&num1);
switch(num1){
case 1:printf("Buy Data plans\n1.Daily\n2.Weekly\n3.Monthly\n4.Quit\n");
printf("________________________________________________________________________________________________\n");
scanf("%d",&num2);
switch(num2){
case 1:printf("1.N50 for 40mb\n2.N100 for 100mb\n3.N200 for 200mb\n4.Quit\n");
printf("________________________________________________________________________________________________\n");
scanf("%d",&num3);
switch(num3){
case 1:printf("1.Proceed\n2.Quit\n");
printf("________________________________________________________________________________________________\n");
scanf("%d",&num4);
if (num4==1){
    if(bal>=50){
        printf("Your Activation of 40mb Daily plan was Successful");
    }
    else{
        printf("Insufficient Balance");
    }
}
else if(num4==2){
    printf("Thanks for choosing MTN");
}
else {
    printf("Invalid");
}
break;
case 2:printf("1.Proceed\n2.Quit\n");
printf("________________________________________________________________________________________________\n");
scanf("%d",&num5);
if (num5==1){
    if(bal>=100){
        printf("Your Activation of 100mb Daily plan was Successful");
    }
    else{
        printf("Insufficient Balance");
    }
}
else if(num5==2){
    printf("Thanks for choosing MTN");
}
else {
    printf("Invalid");
}
break;
case 3:printf("1.Proceed\n2.Quit\n");
printf("________________________________________________________________________________________________\n");
scanf("%d",&num6);
if (num6==1){
    if(bal>=50){
        printf("Your Activation of 200mb Daily plan was Successful");
    }
    else{
        printf("Insufficient Balance");
    }
}
else if(num6==2){
    printf("Thanks for choosing MTN");
}
else {
    printf("Invalid");
}
break;
case 4:printf("Thanks for choosing MTN");
break;
default:
    printf("invalid");
}
break;
case 2:printf("1.N300 for 350mb\n2.N500 for 1.5gb\n3.N1500 for 6gb\n4.Quit\n");
printf("________________________________________________________________________________________________\n");
scanf("%d",&num5);
switch(num5){
case 1:printf("1.Proceed\n2.Quit\n");
printf("________________________________________________________________________________________________\n");
scanf("%d",&num6);
if (num6==1){
    if(bal>=300){
        printf("Your Activation of 350mb Weekly plan was Successful");
    }
    else{
        printf("Insufficient Balance");
    }
}
else if(num6==2){
    printf("Thanks for choosing MTN");
}
else {
    printf("Invalid");
}
break;
case 2:printf("1.Proceed\n2.Quit\n");
printf("________________________________________________________________________________________________\n");
scanf("%d",&num7);
if (num7==1){
    if(bal>=500){
        printf("Your Activation of 1.5gb Weekly plan was Successful");
    }
    else{
        printf("Insufficient Balance");
    }
}
else if(num7==2){
    printf("Thanks for choosing MTN");
}
else {
    printf("Invalid");
}
break;
case 3:printf("1.Proceed\n2.Quit\n");
printf("________________________________________________________________________________________________\n");
scanf("%d",&num8);
if (num8==1){
    if(bal>=1500){
        printf("Your Activation of 6gb Weekly plan was Successful");
    }
    else{
        printf("Insufficient Balance");
    }
}
else if(num8==2){
    printf("Thanks for choosing MTN");
}
else {
    printf("Invalid");
}
break;
case 4:printf("Thanks for choosing MTN");
break;
default:
    printf("invalid");
}
break;






break;
case 3:printf("1.N1000 for 1.5gb\n2.N2000 for 4.5gb\n3.N6000 for 25gb\n4.Quit\n");
printf("________________________________________________________________________________________________\n");
scanf("%d",&num9);
switch(num9){
case 1:printf("1.Proceed\n2.Quit\n");
printf("________________________________________________________________________________________________\n");
scanf("%d",&num10);
if (num10==1){
    if(bal>=1000){
        printf("Your Activation of 1.5gb Monthly plan was Successful");
    }
    else{
        printf("Insufficient Balance");
    }
}
else if(num10==2){
    printf("Thanks for choosing MTN");
}
else {
    printf("Invalid");
}
break;
case 2:printf("1.Proceed\n2.Quit\n");
printf("________________________________________________________________________________________________\n");
scanf("%d",&num11);
if (num11==1){
    if(bal>=2000){
        printf("Your Activation of 4.5gb Monthly plan was Successful");
    }
    else{
        printf("Insufficient Balance");
    }
}
else if(num11==2){
    printf("Thanks for choosing MTN");
}
else {
    printf("Invalid");
}
break;
case 3:printf("1.Proceed\n2.Quit\n");
printf("________________________________________________________________________________________________\n");
scanf("%d",&num12);
if (num12==1){
    if(bal>=6000){
        printf("Your Activation of 25gb Monthly plan was Successful");
    }
    else{
        printf("Insufficient Balance");
    }
}
else if(num12==2){
    printf("Thanks for choosing MTN");
}
else {
    printf("Invalid");
}
break;
case 4:printf("Thanks for choosing MTN");
break;
default:
    printf("invalid");
}

break;
case 4:printf("Thanks for choosing MTN");
break;
default:
    printf("invalid");
}
break;
case 2:printf("Your ACCT balance is N%d",bal);
break;
case 3:printf("Thanks for choosing MTN");
break;
default:
    printf("invalid");
}

}
