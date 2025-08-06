#include<iostream>
using namespace std;
int main() {
    float km;
    cout << "Enter distance in kilometers: ";
    cin >> km;
    cout << km << " kilometers is " << km * 0.621371 << " miles." << endl;
    return 0;
}
