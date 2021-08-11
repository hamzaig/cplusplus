#include<iostream>
using namespace std;
int main()
{
    int temp,a[5];
    cout<<"\nEnter the elements\n";
    for(int i=0;i<5;i++)
    {
        cin>>a[i];//7 2 2 9 4
    }
    for(int i=1;i<5;i++) 
    {
    	int j;
        temp=a[i];//index of 4 value of array 4
        j=i-1; //index of array 2 value 7 
        while((temp<a[j])&&(j>=0))  
        {
            a[j+1]=a[j];    //moves element forward 
            j=j-1;
        }
        a[j+1]=temp;    //insert element in proper place//  2 2 4 7 9,
    }
    cout<<"\nSorted list is as follows\n";
    for(int i=0;i<5;i++)
    {
        cout<<a[i]<<" ";
    }
    return 0;
}
