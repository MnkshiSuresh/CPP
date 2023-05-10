
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



