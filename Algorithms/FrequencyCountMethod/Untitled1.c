int sums(int A[],int n)
{
    int s;/////////////////////--- 1
    for(int i=0;i<n;i++)//---------n+1
    {
        s=s+A[i];//-----------------n
    }
    return s;//--------------------1
}

//Time Complaxity
//=1+n+1+n+1=f(n)=2n+3=O(n)
//Space Complaxity
//s,i,n,A
//1,1,1,n=s(n)=n+3=O(n)

int main(){
    int x;
    int A[5]={1,2,3,4,5};
    x=sums(A,5);
    printf("%d",x);

}
