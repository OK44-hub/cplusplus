#include<iostream>
using namespace std;
int main(){
int a;
cout<< " enter the number: ";
cin>> a;
bool is_prime=true;
for(int i=2;i<a;i++){

    if(a%i==0){
        is_prime=false;
        break;
    }

}
 if(is_prime==true){

    cout<< a<<" is prime";
 }
else{
    cout<<" is not a prime";
}



return 0;
}
