#include<stdio.h>
main(){
    char str[20];
    FILE *fp;
    fp=fopen("f1.txt","r");
    if(fp==NULL){
        printf("File Not Found");
        exit(1);
    }
    while(fgets(str,19,fp)!=NULL){
        printf("%s",str);
    }
    fclose(fp);
}
