#include<iostream>
using namespace std;

int main() {
    int n, pos=0, value;

    cout << "Enter number of elements: ";
    cin >> n;

    int arr[n];
    
    cout << "Enter " << n << " elements:\n";
    for(int i=0; i<n; i++) 
    cin >> arr[i];

    cout << "Enter position to delete (1 to " << n << "): ";
    cin >> pos;
    
    // Check valid position
    if (pos<1 || pos>n) {
        cout << "Invalid Position!";
        return 0;
    }

    // delete first element of the array
    // for(int i=0; i<n; i++) {
    //     arr[i] = arr[i+1];
    // }
        
    // delete last element of the array
    // int x=-1;
    // arr[x-1] = arr[x];

    // delete element at any position
    for(int i=pos-1; i<n-1; i++) {
        arr[i] = arr[i+1];
    }
    
    // arr[pos-1] = value;
    n--;

    cout << "Array after deletion:\n";
    for(int i=0; i<n; i++) 
        cout << arr[i] << " ";

    return 0;
}