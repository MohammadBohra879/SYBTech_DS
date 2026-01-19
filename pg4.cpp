// WAP and create an array of {5, 7, 3, 11, 15} and print the array elements of their squares.
#include<iostream>
using namespace std;
int main(){
    int arr[5] = {5, 7, 3, 11, 15};
    int arrsquare[5];
    for(int i = 0; i < 5; i++){
        arrsquare[i] = arr[i] * arr[i];
    }
    cout << "Squares of the array elements are:" << endl;
    for(int i = 0; i < 5; i++){
        cout << arrsquare[i] << " ";
    }
    return 0;
}