#include <stdio.h>
int main(){
FILE *fp;
fp=fopen("fputs_test.txt","w+");
fputs("This is GURU99 Tutorial on fputs,",fp);
fputs("We dont need to use for loop\n",fp);
fputs("Easier than fputc function\n",fp);
fclose(fp);
return(0);
}
