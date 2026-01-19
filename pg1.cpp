// 1. WAP to calculate size of default datatype: integer, float and double
#include<iostream>
using namespace std;

int main() {
    int a;
    float b;
    double c;
    long d;
    short e;

    cout << "Size of int a: " << sizeof(a) << endl;
    cout << "Size of float b: " << sizeof(b) << endl;
    cout << "Size of double c: " << sizeof(c) << endl;
    cout << "Size of long d: " << sizeof(d) << endl;
    cout << "Size of short e: " << sizeof(e) << endl;

    return 0;
}