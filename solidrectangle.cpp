#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"number of rows:";
    cin>>n;

    int m;
    cout<<"number of columns:";
    cin>>m;
for(int i=1;i<=n;i++){//outer for is responsible for repeating thr columns
    for(int i=1;i<=m;i++){//inner for is responsible for printing stars in columns
        cout<<"*";
    }
    cout<<endl;
}
    
}