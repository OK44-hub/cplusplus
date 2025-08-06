#include<iostream>
using namespace std;
int main(){
int a[]={40,30,20,10};
int min=a[0];
for(int i=1;i<4;i++){
if(a[i]<min)
min=a[i];
}
cout<<"Minimum = "<<min;
return 0;
}

