int length(char *p){
    int i;
    for(i=0;*(p+i)!='\0';i++);
    return i;
}
char* reverse(char *p){
    int i,j;
    char temp;
    for(i=0;*(p+i)!='\0';i++);
    for(j=0;j<i/2;j++){
        temp=*(p+j);
        *(p+i)=*(p+i-1-j);
        *(p+i-1-j)=temp;
    }
    return p;
}
main()
{
    printf("%d",length("Hamzaa"));
    printf("%s",reverse("Hamza"));
    //reverse("Computer ");
}
