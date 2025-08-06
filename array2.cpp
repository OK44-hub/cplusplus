#include<iostream>
using namespace std;
int main(){
int a[]={10,21,32,43};
int even=0,odd=0;
for(int i=0;i<4;i++){
if(a[i]%2==0)
even++;
else
 odd++;
}
cout<<"Even count: "<<even<<endl<<"Odd count: "<<odd;
return 0;
}

