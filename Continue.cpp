//continue
#include <iostream>
using namespace std;

int main() {
  int pocketmoney=1000,date,count=0;
  cout<<"**  a child want to go out with her friends\nbut the condition of allowing her is that the date must be a even number and she must have more that 200 pocketmoney  ** \n\n\n\n";
  cout<<"so find whether she could hangout on the respective dates she wish for in a month considering the conditions put forward by her parents.\n\n\n";
  cout<<"ps:on each dayout she loses 200.\n\n\n\n";
  
 while(pocketmoney>200){
     cin>>date;
     if(date%2==0){
         cout<<"cant go\n";
         continue;
     }
     cout<<"you can go on ";
     cout<<date;
     cout<<"\n";
     count++;
     pocketmoney=pocketmoney-200;
 } 
cout<<"out of your pocketmoney...now wait for the next month...";
  return 0;}
