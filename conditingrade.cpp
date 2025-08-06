#include<iostream>
using namespace std;
int main(){
int mark;
cout<<" provide marks: ";
cin>>mark;
if(mark>=90){
cout<<"your grade is A"<< endl;

}

else if (mark>=80 ||mark==89){


cout<< "your grade is B"<< endl;
}
else if(mark>=70||mark==79){
cout<< "your grade is c"<< endl;
}
else if(mark>=60 || mark==69){
cout<< "your grade is D"<< endl;
}
else {
cout<< "your grade is F"<< endl;
}

return 0;
}
