#include<iostream>
using namespace std;

int main() {
    int num;
    cout << "Enter a 3-digit number: ";
    cin >> num;

    int a = num % 10;
    int b = (num / 10) % 10;
    int c = num / 100;

    int sum = a + b + c;

    cout << "Sum of digits is: " << sum;

    return 0;
}

