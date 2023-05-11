//reverse a number

#include<iostream>
using namespace std;
int main(){
    int n,rev=0;
    cout<<"Enter the number";
    cin>>n;
    while(n>0){
        int lastdig;
        lastdig=n%10;
        rev=10*rev+lastdig;
        n=n/10;
    }cout<<rev;
    return 0;
}
