// Largest among 3 numbers
#include <iostream>
using namespace std;

int main() {
int a,b,c;
cout<<"enter the first number\n";
cin>>a;
cout<<"enter the second number\n";
cin>>b;
cout<<"enter the third number\n";
cin>>c;

if(a>b){
    if(a>c){
        cout<<"first one the largest element";
    }
}else if(b>c){
    cout<<"second one the largest of all";
    }
else{
    cout<<"third one the largest";
}
return 0;
}
