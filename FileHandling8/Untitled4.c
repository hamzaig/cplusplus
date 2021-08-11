#include<stdio.h>
main(){
    int a,b,c;
    FILE *fp;
    fp=fopen("f1.txt","r");
    fscanf(fp,"%d%d%d",&a,&b,&c);
    printf("%d %d %d",a,b,c);
    fclose(fp);
}
