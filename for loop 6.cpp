#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    int a = 0;

    if (n <= 1) {
        cout << n << " is not a prime number." << endl;
    } else {
        for (int i = 1; i <= n; i++) {
            if (n % i == 0) {
                a++;
            }
        }

        if (a == 2) {
            cout << n << " is a prime number." << endl;
        } else {
            cout << n << " is not a prime number." << endl;
        }
    }

    return 0;
}

