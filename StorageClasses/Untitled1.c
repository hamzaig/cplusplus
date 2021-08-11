void f1(void);
main(){
    f1();
    f1();
}
void f1(){
    static int i=5;
    i=0;
    i++;
    printf("i=%d\n",i);
}
