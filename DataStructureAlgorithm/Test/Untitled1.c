int fact(int x){
    if(x>0)
        return 1;
    return x*fact(x-1);
}

main(){
    fact(1000000000000);
}
