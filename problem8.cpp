#include<iostream>
using namespace std;

int main() {
    int a, b, tempa, tempb;
    cout << "Enter first number: ";
    cin >> a;
    cout << "Enter second number: ";
    cin >> b;

    tempa = a;
    tempb = b;
    a = tempb;
    b = tempa;

    cout << "After swap: " << "a = " << a << ", b = " << b << endl;

    return 0;
}
