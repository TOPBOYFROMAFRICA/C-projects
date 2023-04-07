#include<stdio.h>;
int main(){
int num;
char g;
printf("Enter Your Gender?  M/F   \n");
scanf("%s",&g);
printf("Enter Your Age\n");
scanf("%d",&num);
if(g == 'm'||g =='M'){
    if(num>40){
        printf("\nEligible for top managerial position");
    }
    else{
            printf("\nEligible for managerial position");
        }
}
else{
    if(g == 'f'|| g =='F' ){
        printf("\nEligible For Admin position");
    }
    else{
        printf("\nWe do not fuck with TRANSGENDERS Respectfully");
    }
}
}
