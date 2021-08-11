void f1(void);
int x;
main(){
    printf("x=%d\n",x);
    f1();
    printf("x=%d\n",x);
}
void f1(){
    int x=5;
    x++;
    printf("i=%d\n",x);
}

