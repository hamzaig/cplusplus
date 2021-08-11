#include <iostream>
using namespace std;
int sum_number(int n);
int main()
{
    int num;
    cout<<"Enter a positive integer: \n";
    cin>>num;
    cout<<"Sum = "<<sum_number(num);
    return 0;
}

int sum_number(int n)
{
    if(n != 0)
        return n + sum_number(n-1);
    else
        return n;
}
