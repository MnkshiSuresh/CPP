//switch(break)
#include <iostream>
using namespace std;

int main() {
  cout<<"simple calculator using switch that does addition subtraction division and multiplication\n";
  int ch;
  int fnum;
  cout<<"enter the first number:\n";
  cin>>fnum;
  int num;
  int r=0;
  int is=1;
  
while(is==1){
      
      cout<<"enter the choice of operation you need to perform with the last result:\n";
      cout<<"1.add\n2.sub\n3.mul\n4.div\n5.exit\n";
      cin>>ch;
      cout<<"enter the next number:";
      cin>>num;
       switch(ch){
      case 1: r=fnum+num;fnum=r;cout<<r;break;
      case 2: r=fnum-num;fnum=r;cout<<r;break;
      case 3: r=fnum*num;fnum=r;cout<<r;break;
      case 4: r=fnum/num;fnum=r;cout<<r;break;
      case 5: cout<<r;break;
  }
    cout<<"\n\nto stop the calculator enter 0 or wanna continue the enter 1";
    cin>>is;
}    
      return 0;
}
