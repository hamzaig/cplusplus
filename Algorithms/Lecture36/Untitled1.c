#include <conio.h>
#include <stdio.h>
#include<stdlib.h>

void main(){
    int x,y;
    void add(void);
    system ("cls");
    printf("Enter two numbers");
    scanf("%d%d",&x,&y);
    add();
    getch();
}
void add(){
    int c=10;
    printf("Sum is %d",c);
}
