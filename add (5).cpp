#include <iostream>
using namespace std;

int main()
{
    int i, n;
    float arr[100];

    cout << endl;

    // Store number entered by the user
    for(i = 1; i <=10; ++i)
    {
       cout << "Enter Number " << i + 1 << " : ";
       cin >> arr[i];
    }

    // Loop to store largest number to arr[0]
    for(i = 1;i <=10; ++i)
    {
       // Change < to > if you want to find the smallest element
       if(arr[0] > arr[i])
           arr[0] = arr[i];
    }
    cout << "Largest element = " << arr[0];

    return 0;
}
