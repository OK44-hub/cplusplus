#include <iostream>
using namespace std;
int main(){
int n;
cout << "Enter a number: ";
cin >> n;

cout << "Even numbers " << n << " are:" << endl;

for (int i = 1; i <= n; i++) {
if(i % 2 == 0) {
cout << i << " ";
        }
    }

cout<< endl;
return 0;
}
