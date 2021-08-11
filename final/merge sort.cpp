#include <iostream>
using namespace std;
int main()
{
	int i,j,k,arr1[5]={2,5,7,9,10},arr2[5]={2,4,7,9,11},arr3[10];
	i=j=k=0;
	while(i<5 && j<5)
	{
		if(arr1[i]<arr2[j])
		{
			arr3[k]=arr1[i];
			k++;
			i++;
		}
		else
		{
			arr3[k]=arr2[j];
			k++;
			j++;
		}
	}
	while(i<5)
		{
			arr3[k]=arr1[i];
			k++;
			i++;
		}
	while(j<5)
		{
			arr3[k]=arr2[j];
			k++;
			j++;
		}	
	for(int i=0;i<10;i++)
	{
		cout<<arr3[i]<<" ";
	}
}
