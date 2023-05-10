#include <iostream>
using namespace std;

int main() {
int savings;
cin>>savings;
if(savings>500){
    if(savings>1000){
        cout<<"go on a date";
    }
    else if(savings>800){
        cout<<"go for a movie";
        
    }
    else{
        cout<<"go for dinner ";
    }
}
else{
    cout<<"save money";
}
return 0;
}
