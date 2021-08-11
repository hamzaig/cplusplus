#include<stdio.h>
int main(){
    int i;
    FILE *fp;
    char s[100];
    fp=fopen("f1.txt","w");
    if(fp==NULL){
        printf("File Cannot Open");
        exit(1);
    }
    printf("Enter A String");
    gets(s);
    for(i=0;i<strlen(s);i++){
        fputc(s[i],fp);
    }
    getch();
    fclose(fp);
    getch();
}
