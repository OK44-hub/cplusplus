#include<iostream>
using namespace std;
int main(){
int a[]={10,20,20,40};
int sum=0;
for(int i=0;i<4;i++)
    sum+=a[i];
cout<<"Sum = "<<sum;
return 0;
}
