// WAP TO CREATE  an array of all odd no. bt 1 to 50 
#include <iostream>
using namespace std;
int main(){
    int arr[25];
    int count = 0;
    for(int i = 1; i <= 50; i++){
        if(i % 2 != 0){
            arr[count] = i;
            count++;
        }
    }
    for(int i = 0; i < 25; i++){
        cout << arr[i] << " ";
    }
    return 0;
}