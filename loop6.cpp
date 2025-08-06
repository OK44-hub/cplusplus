#include <iostream>
using namespace std;
int main() {
int n;
cout << "Enter a number: ";
cin >> n;
for (int i = 2; i * i <= n; i++) {
    if (n % i == 0) {
    cout<<n <<"is not prime : ";
    }
          else (n % i == 1)
        cout << n << " is  a prime number." << endl;
        }

    return 0;
}
