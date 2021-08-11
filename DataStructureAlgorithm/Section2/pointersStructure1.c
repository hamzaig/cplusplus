struct Rectangle
{
    int length;
    int bredth;
};
int main(){
    struct Rectangle a;
    struct Rectangle *p;
    p=(struct Rectangle*)malloc(sizeof(struct Rectangle));
    p->length=10;
    p->bredth=20;
    printf("%d\n",p->length);
    printf("%d",p->bredth);
}
