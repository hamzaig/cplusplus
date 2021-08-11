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
    printf("Enter Book id, title and price:\n");
    scanf("%d",&b.bookid);
    fflush(stdin);
    gets(b.title);
    scanf("%f",&b.price);
    fp=fopen("f1.dat","wb");
    fwrite(&b,sizeof(b),1,fp);
    fclose(fp);
}
