// sum upto n numbers

for loop:-


#include <iostream>
using namespace std;

int main() {
int n,sum=0;
cout<<"enter the limit ";
cin>>n;
for(int i=0;i<=n;i++){
    sum=sum+i;
}
cout<<"sum=";
cout<<sum;
return 0;
}


while loop:-

  
#include <iostream>
using namespace std;

int main() {
int n,sum=0,i=1;
cout<<"enter the limit ";
cin>>n;
while(i<=n){
    sum=sum+i;
    i++;
}
cout<<"sum=";
cout<<sum;
return 0;
}


do while loop:-
  
#include <iostream>
using namespace std;

int main() {
int n,sum=0,i=1;
cout<<"enter the limit ";
cin>>n;
do{
    sum=sum+i;
    i++;
}while(i<=n);

cout<<"sum=";
cout<<sum;
return 0;
}
