#include<stdio.h>
struct book
{
    int bookid;
    char title[20];
    float price;
};
main(){
    struct book b;
    FILE *fp;
    fp=fopen("f1.dat","rb");
    if(fp==NULL){
        printf("File Not Found");
        exit(1);
    }
    while(fread(&b,sizeof(b),1,fp)>0){
        printf("%d\n%s\n%f\n\n",b.bookid,b.title,b.price);
    }
    fclose(fp);
}

