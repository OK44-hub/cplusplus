#include<iostream>
using namespace std;

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    if (num == 2 || num == 3 || num == 5 || num == 7) {
        cout << "It is a prime number.";
    }
    else {
        cout << "It is not a prime number.";
    }

    return 0;
}

