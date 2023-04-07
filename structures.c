
struct studentinfo{
char name[20];
char course[10];
int age;
char phone[15];
char address[100];
char maritalstatus[15];
char email[50];
};
int main(){
struct studentinfo student1;
struct studentinfo student2;
strcpy(student1.name,"Nwankwo Ifechukwu");
strcpy(student1.course,"Adse");
student1.age=12;
strcpy(student1.phone,"08166473940");
strcpy(student1.address,"ifite");
strcpy(student1.maritalstatus,"Single as fuck");
strcpy(student1.email,"Nwankwocharles57@gmail.com");

printf("\t \n Name:%s",student1.name);
printf("\t \n Course:%s",student1.course);
printf("\t \n Age:%d",student1.age);
printf("\t \n Phone:%d",student1.phone);
printf("\t \n Adresss:%s",student1.address);
printf("\t \n MaritalStatus:%s",student1.maritalstatus);
printf("\t \n Email:%s",student1.email);
}
