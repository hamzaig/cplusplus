#include<stdio.h>
long p=1;
void toh(int n,int a,int b,int c){
    if(n>0){
        toh(n-1,a,c,b);
        printf("%d. (%d,%d)\n",p++,a,c);
        toh(n-1,b,a,c);
    }
}
int main(){
    toh(20,1,2,3);
}
