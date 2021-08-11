struct Rectangle
{
    int length;
    int bredth;
};
int main(){
    struct Rectangle r={2,5};
    struct Rectangle *p=&r;
    r.length=22;
//    (*p).length=23;
    p->length=33;
    printf("%d",r.length);
    getch();
}
