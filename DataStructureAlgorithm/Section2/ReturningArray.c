#include <stdlib.h>

int * fun(int n)
{
    int *p;
    p=(int *)malloc(n*sizeof(int));
    return(p);
}
int main(){
    int *a;
    a=fun(10);
    a[5]=10;
    printf("%d",a[5]);
}
