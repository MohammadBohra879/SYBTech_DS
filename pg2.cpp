// WAP to find sum of the element in the array , array should have at least 10 elements.
#include <iostream>
using namespace std;
int main()
{
    int arr[10];
    int sum = 0;
    cout << "Enter 10 numbers: " << endl;
    for (int i = 0; i < 10; i++)
    {   
        cout << "Enter number " << i + 1 << ": ";
        cin >> arr[i];
        sum = sum + arr[i];
    }
    cout << sum << endl;
}