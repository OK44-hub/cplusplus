#include<iostream>
using namespace std;
int main(){
int a[10],b[10],n;
cin>>n;
for(int i=0;i<n;i++)cin>>a[i];
for(int i=0;i<n;i++)b[i]=a[n-1-i];
bool ok=true;
for(int i=0;i<n;i++){
if(a[i]!=b[i]){
ok=false;
break;
}
}
if(ok)cout<<"Palindrome";
else cout<<"Not Palindrome";
return 0;
}

