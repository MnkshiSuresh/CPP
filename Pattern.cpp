
//pattern problems


#include<iostream>
using namespace std;
int main(){
    int i,j;
    int row,col;
    cout<<"enter the columns needed\n";
    cin>>col;
    cout<<"enter the rows needed\n";
    cin>>row;
   
    for(i=0;i<row;i++){
        cout<<"\n";        
        for(int j=0;j<col;j++){
            cout<<"*";
        }
    }
    return 0;
}



#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the limit:";
    cin>>n;
    for(int i=1;i<=n;i++){
       int count=1;
       while(count<=i){
           cout<<i<<" ";
           count++;
       }
     
       cout<<"\n";
        
    }
    return 0;
}



#include <iostream>
using namespace std;
int main(){
    int n,j=1;
    cout<<"enter the limit:";
    cin>>n;
    for(int i=1;i<=n;i++){
       int count=1;
       while(count<=i){
           
           cout<<j<<" ";
           j++;
           count++;
       }
     
       cout<<"\n";
        
    }
    return 0;
}
