int main(){
int num;
printf("Enter a Number:");
scanf("%d",&num);
square(num);
}
square(int num){
int sq=num * num;
printf("The square of %d is %d",num,sq);
}
