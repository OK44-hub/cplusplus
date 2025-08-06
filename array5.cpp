#include<iostream>
using namespace std;
int main(){
int a[]={1,2,3,4,5},b[5],k=2,n=5;
for(int i=0;i<n;i++)b[(i+k)%n]=a[i];
for(int i=0;i<n;i++)cout<<b[i]<<" ";
return 0;
}

