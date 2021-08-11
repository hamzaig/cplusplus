#include<stdlib.h>

void input(int *p){
    int i;
    for(i=0;i<5;i++)
        scanf("%d",&(*(p+i)));
}
void display(int *p){
    int i;
    printf("\n\n");
    for(i=0;i<5;i++)
        printf("%d\t",*(p+i));
}


main(){
    int a[5];
    system ("cls");
    input(&a[0]);
    display(&a[0]);
    getch();
}

