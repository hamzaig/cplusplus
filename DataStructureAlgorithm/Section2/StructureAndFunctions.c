struct Rectangle
{
    int length;
    int bredth;
};

void initializing(struct Rectangle *r,int l,int b){
    r->length=l;
    r->bredth=b;
}

int area(struct Rectangle r){
    return r.bredth*r.length;
}

void changeLength(struct Rectangle *r,int l){
    r->length=l;
}

int main(){
    int x;
    struct Rectangle r;
    initializing(&r,10,20);
    x=area(r);
    printf("%d  %d\n",x,r.length);
    changeLength(&r,33);
    printf("%d  %d",x,r.length);
}

