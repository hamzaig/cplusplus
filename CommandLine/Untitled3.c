main(int argc,char *argv[]){
    int i;
    printf("Total Arguments = %d\n",argc);
    for(i=0;i<argc;i++){
        printf("%d Argument = %s\n",i+1,argv[i]);
    }
    getch();
}
