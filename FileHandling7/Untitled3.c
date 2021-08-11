#include<stdio.h>
main(){
    FILE *fp;
    int a,b;
    printf("Enter Two Numbers:\n");
    scanf("%d%d",&a,&b);
    fp=fopen("f1.txt","w");
    fprintf(fp,"Sum of %d and %d is %d",a,b,a+b);
    fclose(fp);
}
