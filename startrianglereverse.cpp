#include<iostream>
using namespace std;
int main(){
int x;
cout<<"enter the number:";

cin>>x;

for(int i=1;i<=x;i++){
    for(int j=1;j<=x+1-i;j++){
        cout<<"*";
    }
    cout<<endl;
}
}