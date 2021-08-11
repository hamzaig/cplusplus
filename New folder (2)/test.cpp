#include <iostream>
using namespace std;
void display (int*, int);
void assigValue (int*, int);
const int MAX = 5;
int main ()
{
int array[MAX];
int* ptr = array;
assigValue (ptr, MAX);
display (ptr, MAX);
cin.get();
cin.get();
return 0;
}
void assigValue (int* ptr, int size)
{
cout <<"Enter the five values\n";
for (int i=0; i<size; i++)
{
cin >> ptr[i];
}
}
void display (int* ptr, int size)
{
for (int i=0; i<size; i++)
{
cout <<"the values entered: "<<ptr[i]<<endl;
}

}

