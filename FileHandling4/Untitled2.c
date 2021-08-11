#include<stdio.h>
main(){
    char str[20];
    FILE *fp;
    printf("Please Enter Your Name: ");
    gets(str);
    fp=fopen("f1.txt","a");
    fputs(str,fp);
    fclose(fp);
}
